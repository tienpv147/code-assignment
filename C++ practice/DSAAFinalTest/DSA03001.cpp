#include <bits/stdc++.h>

using namespace std;

int prices[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
int t[10] = {0};

void solve()
{
    int n, i = 9;
    cin >> n;
    memset(t, 0, sizeof(t));
    while (n > 0)
    {
        if (prices[i] <= n)
        {
            t[i]++;
            // cout << t[i] << " ";
            n -= prices[i];
        }
        else
        {
            i--;
        }
    }
    cout << accumulate(t, t + 10, 0) << endl;
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