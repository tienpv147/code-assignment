#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n], key, j;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i;
        cout << "Buoc " << i - 1 << ": ";
        for (int k = 0; k < i; k++)
        {
            cout << arr[k] << " ";
        }
        cout << endl;
        while (j > 0 && arr[j - 1] > key)
        {
            arr[j] = arr[j - 1];
            j--;
        }
        arr[j] = key;
    }
    cout << "Buoc " << n - 1 << ": ";
    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }
    cout << endl;
}