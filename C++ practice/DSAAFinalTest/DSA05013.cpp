#include <bits/stdc++.h>

using namespace std;

long long modulo = 1e9 + 7;
long long dp[100001];

void solve()
{
    int n, k;
    cin >> n >> k;
    if (k == 1)
    {
        cout << 1 << endl;
        return;
    }
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    dp[1] = 1;
    // dp[2] = 2;
    // dp[3] = 3;
    // if (k == 3) {
    //     dp[3]++;
    // }
    // for (int i = 3; i <= k; i++)
    // {
    //     dp[i] = accumulate(dp, dp + i, 0);
    //     // if (i == k) {
    //     //     dp[i]++;
    //     // }
    // }
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= min(i, k); j++)
        {
            dp[i] += dp[i - j];
            dp[i] %= modulo;
        }
    }
    cout << dp[n] << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}