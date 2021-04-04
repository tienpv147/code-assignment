#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int flag = 1;
        for (size_t i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int j = n - 2;
        while (j > 0 && (a[j] > a[j + 1]))
            j--;
        // cout << j;
        if (j == 0)
            for (size_t i = 0; i < n; i++)
            {
                cout << i + 1 << " ";
            }
        else
        {
            int index = n - 1;
            while (a[index] < a[j])
                index--;
            swap(a[index], a[j]);
            int r = n - 1;
            int l = j + 1;
            while (l <= r)
            {
                swap(a[l], a[r]);
                l++;
                r--;
            }
            for (size_t i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
        }

        cout << endl;
    }
}