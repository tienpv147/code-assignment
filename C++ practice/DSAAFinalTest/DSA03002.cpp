#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    string sa = to_string(a);
    string sb = to_string(b);
    replace(sa.begin(), sa.end(), '6', '5');
    replace(sb.begin(), sb.end(), '6', '5');
    int minSum = stoi(sa) + stoi(sb);
    replace(sa.begin(), sa.end(), '5', '6');
    replace(sb.begin(), sb.end(), '5', '6');
    int maxSum = stoi(sa) + stoi(sb);
    cout << minSum << " " << maxSum << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}