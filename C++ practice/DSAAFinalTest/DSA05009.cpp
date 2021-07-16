#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = accumulate(arr, arr + n, 0);
    if (sum % 2 == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        int halfSum = sum / 2;
        int dp[halfSum + 1] = {0};
        dp[0] = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = halfSum; j >= arr[i]; j--)
            {
                if (dp[j - arr[i]] == 1)
                    dp[j] = 1;
            }
        }
        if (dp[halfSum] == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
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