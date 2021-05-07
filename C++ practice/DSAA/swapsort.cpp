#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int flag = 0;
    int check = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                check = 1;
                swap(arr[i], arr[j]);
            }
        }
        if (check)
        {
            flag++;
            cout << "Buoc " << flag << ": ";
            for (int k = 0; k < n; k++)
            {
                cout << arr[k] << " ";
            }
            cout << endl;
            check = 0;
        }
    }
    // for (int k = 0; k < n; k++)
    // {
    //     cout << arr[k] << " ";
    // }
}