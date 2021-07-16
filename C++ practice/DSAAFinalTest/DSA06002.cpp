#include <bits/stdc++.h>

using namespace std;

struct st
{
    int key;
    int value;
    int index;
};


bool cmp(st &a, st &b)
{
    if (a.value < b.value) {
        return true;
    } else if (a.value == b.value && a.index < b.index) {
        return true;
    }
    return false;
}

void solve()
{
    int n, x, val;
    cin >> n >> x;
    vector<st> vec;
    int inx = 0;
    for (int i = 0; i < n; i++)
    {
        st dt;
        cin >> dt.key;
        dt.value = abs(x - dt.key);
        dt.index = inx++;
        vec.push_back(dt);
    }
    sort(vec.begin(), vec.end(), cmp);
    for (st res : vec)
    {
        cout << res.key << " ";
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