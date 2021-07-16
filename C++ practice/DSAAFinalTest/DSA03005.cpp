#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    if (n == 1) {
        cout << 0 << endl;
        return;
    }
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int way1 = abs(accumulate(arr, arr + k, 0) - accumulate(arr + k, arr + n, 0));
    int way2 = abs(accumulate(arr, arr + n - k, 0) - accumulate(arr + n - k, arr + n, 0));
    if (way1 >= way2) {
        cout << way1;
    } else {
        cout << way2;
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