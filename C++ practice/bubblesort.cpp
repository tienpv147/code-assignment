#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int step = 0, flag = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                flag = 1;
                swap(arr[j], arr[j + 1]);
            }
        }
        if (flag)
        {
            step++;
            cout << "Buoc " << step << ": ";
            for (int k = 0; k < n; k++)
            {
                cout << arr[k] << " ";
            }
            flag = 0;
        }
        cout << endl;
    }
}