#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int arr[n];
    stack<int> st1, st2;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        int ok = false;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                cout << arr[j] << " ";
                ok = true;
                break;
            }
        }
        if (!ok) cout << "-1" << " ";
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