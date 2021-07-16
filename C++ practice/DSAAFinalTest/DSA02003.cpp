#include <bits/stdc++.h>

using namespace std;

int n;
int arr[15][15];
int check;
vector<string> res;

void backTracking(int i, int j, string s)
{
    if (i == n && j == n)
    {
        check = true;
        res.push_back(s);
        return;
    }
    if (i < n && arr[i + 1][j])
    {
        backTracking(i + 1, j, s + "D");
    }
    if (j < n && arr[i][j + 1])
    {
        backTracking(i, j + 1, s + "R");
    }
}

void solve()
{
    cin >> n;
    memset(arr, 0, sizeof(arr));
    res.clear();
    check = false;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> arr[i][j];
        }
    }
    if (!arr[1][1] || !arr[n][n]) {
        cout << - 1 << endl;
        return;
    }
    backTracking(1, 1, "");
    if (!check)
    {
        cout << -1;
    }
    else
    {
        sort(res.begin(), res.end());
        for (string s : res)
        {
            cout << s << " ";
        }
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