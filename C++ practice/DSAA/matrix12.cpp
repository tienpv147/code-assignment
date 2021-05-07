#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n][m], b[n][m];
        for (size_t i = 0; i < n; i++)
        {
            for (size_t j = 0; j < m; j++)
            {
                cin >> a[i][j];
                b[i][j] = a[i][j];
            }
        }
        
        for (size_t i = 0; i < n; i++)
        {
            for (size_t j = 0; j < m; j++)
            {
                if (a[i][j] == 1)
                {
                    for (size_t q = 0; q < m; q++)
                    {
                        b[i][q] = 1;
                    }
                    for (size_t p = 0; p < n; p++)
                    {
                        b[p][j] = 1;
                    }
                }
            }
        }

        for (size_t i = 0; i < n; i++)
        {
            for (size_t j = 0; j < m; j++)
            {
                cout << b[i][j] << " ";
            }
            cout << endl;
        }

        cout << endl;
    }
    return 0;
}