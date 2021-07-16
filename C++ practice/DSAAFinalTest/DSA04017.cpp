#include <bits/stdc++.h>

using namespace std;

void solve()
{
    long long n;
    cin >> n;
    long long A[n], B[n - 1];
    for (long long i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (long long i = 0; i < n - 1; i++)
    {
        cin >> B[i];
    }
    long long res = 0;
    for (long long i = 0; i < n - 1; i++) {
        if (A[i] != B[i]) {
            res = i + 1;
            break;
        }
    }
    cout << res << endl;
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