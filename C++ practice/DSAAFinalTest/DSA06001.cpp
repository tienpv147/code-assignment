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
    sort(arr, arr + n, greater<>());
    for (int i = 0; i < n / 2; i++)
    {
        cout << arr[i] << " " << arr[n - i - 1] << " ";
    }
    if (n % 2 != 0)
    {
        cout << arr[n / 2] << " ";
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