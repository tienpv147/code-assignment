#include <bits/stdc++.h>

using namespace std;

void solve() {
    int m, n, k;
    cin >> m >> n >> k;
    long long int arr[m + n];
    for (int i = 0; i < m + n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + m + n);
    cout << arr[k - 1] << endl;
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