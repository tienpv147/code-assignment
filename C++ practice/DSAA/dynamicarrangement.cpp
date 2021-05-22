#include <bits/stdc++.h>

using namespace std;

int modulo = 1e9 + 7;

long long arrangement(int n, int k)
{
    if (k > n)
        return 0;
    long long arrangeVal[n + 1][k + 1];
    memset(arrangeVal, 0, sizeof(arrangeVal));

    for (int i = 0; i < n + 1; ++i)
    {
        arrangeVal[i][0] = 1;
        for (int j = 1; j < min(i, k) + 1; ++j)
        {
            arrangeVal[i][j] = (arrangeVal[i - 1][j] + (j * arrangeVal[i - 1][j - 1]) % modulo) % modulo;
        }
    }
    return arrangeVal[n][k];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        cout << arrangement(n, k) << endl;
    }
}