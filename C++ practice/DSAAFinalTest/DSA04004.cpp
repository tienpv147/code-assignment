#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    long k;
    cin >> n >> k;
    long long val = 1;
    while (k % 2 == 0) {
        val++;
        k /= 2;
    } 
    cout << val << endl;
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