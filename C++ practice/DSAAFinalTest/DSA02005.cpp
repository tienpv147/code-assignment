#include <bits/stdc++.h>

using namespace std;

string s;
int arr[100], unused[100];

void backTracking(int i)
{
    for (int j = 1; j <= s.size(); j++)
    {
        if (unused[j])
        {
            arr[i] = j;
            unused[j] = 0;
            if (i == s.size())
            {
                for (int k = 1; k <= s.size(); k++)
                {
                    cout << s[arr[k] - 1];
                }
                cout << " ";
            }
            else
                backTracking(i + 1);
            unused[j] = 1;
        }
    }
}

void solve()
{
    cin >> s;
    sort(s.begin(), s.end());
    memset(unused, true, sizeof(unused));
    backTracking(1);
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