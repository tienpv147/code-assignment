#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    int occ[200] = {0};
    int res = 0;
    for (int i = 0; i < s.size(); i++)
    {
        occ[s[i]]++;
        res = max(res, occ[s[i]]);
    }
    if (s.size() % 2 == 0 && res <= s.size() - res)
    {
        cout << 1;
    }
    else if (s.size() % 2 == 1 && res <= s.size() / 2 + 1)
    {
        cout << 1;
    }
    else
    {
        cout << -1;
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        solve();
    }
}