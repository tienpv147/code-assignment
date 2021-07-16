#include <bits/stdc++.h>

using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    int arr[a + 1];
    int dp[b + 1] = {0};
    for (int i = 1; i <= a; i++) {
        cin >> arr[i];
    }
    dp[0] = 1;
    for (int i = 1; i <= a; i++) {
        for (int j = b; j >= arr[i]; j--) {
            if (dp[j - arr[i]] == 1) {
                dp[j] = 1;
            }
        }
    }
    if (dp[b]) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    cout << endl;
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