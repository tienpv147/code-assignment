#include <bits/stdc++.h>

using namespace std;

struct st {
    int val;
    int index;
};

bool cmp(st a, st b) {
    if (a.val < b.val) return true;
    if (a.val == b.val && a.index < b.index) return true;
    return false;
}

void solve() {
    int n;
    cin >> n;
    vector<st> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i].val;
        vec[i].index = i;
    }
    int fi = 0, end = 0;
    sort(vec.begin(), vec.end(), cmp);
    for (int i = 0; i < n; i++) {
        if (vec[i].index != i) {
            fi += i + 1;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        if (vec[i].index != i) {
            end += i + 1;
            break;
        }
    }
    cout << fi << " " << end << endl;
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