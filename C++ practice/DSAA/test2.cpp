#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n;
        cin >> m;
        int a[n];
        for (size_t i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (size_t i = 0; i < n; i++)
        {
            if (i < n - m)
            {
                cout << a[i + m] << " ";
            }
        }
        for (size_t i = 0; i < m; i++)
        {
            cout << a[i] << " ";
        }

        cout << endl;
    }
}
