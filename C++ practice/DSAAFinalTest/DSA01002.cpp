#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    int arr[k + 1];
    for (int i = 1; i <= k; i++)
    {
        cin >> arr[i];
    }
    int i = k;
    while (i > 0 && arr[i] == n - k + i) i--;
    if (i <= 0)
    {
        for (int i = 1; i <= k; i++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    else
    {
        arr[i] += 1;
        for (int j = i + 1; j <= k; j++) {
            arr[j] = arr[j - 1] + 1;
        }
        for (int i = 1; i <= k; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
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