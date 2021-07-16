#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    cout << 1 << " ";
    for (int i = 2; i <= n; i++) {
        string res;
        
        if (i < pow(2, 2)) {
            res = bitset<2>(i).to_string();
            cout << res << " ";
            continue;
        }
        if (i < pow(2, 3)) {
            res = bitset<3>(i).to_string();
            cout << res << " ";
            continue;
        }
        if (i < pow(2, 4)) {
            res = bitset<4>(i).to_string();
            cout << res << " ";
            continue;
        }
        if (i < pow(2, 5)) {
            res = bitset<5>(i).to_string();
            cout << res << " ";
            continue;
        }
        if (i < pow(2, 6)) {
            res = bitset<6>(i).to_string();
            cout << res << " ";
            continue;
        }
        if (i < pow(2, 7)) {
            res = bitset<7>(i).to_string();
            cout << res << " ";
            continue;
        }
        if (i < pow(2, 8)) {
            res = bitset<8>(i).to_string();
            cout << res << " ";
            continue;
        }
        if (i < pow(2, 9)) {
            res = bitset<9>(i).to_string();
            cout << res << " ";
            continue;
        }
        if (i < pow(2, 10)) {
            res = bitset<10>(i).to_string();
            cout << res << " ";
            continue;
        }
        if (i < pow(2, 11)) {
            res = bitset<11>(i).to_string();
            cout << res << " ";
            continue;
        }
        if (i < pow(2, 12)) {
            res = bitset<12>(i).to_string();
            cout << res << " ";
            continue;
        }
        if (i < pow(2, 13)) {
            res = bitset<13>(i).to_string();
            cout << res << " ";
            continue;
        }
        if (i < pow(2, 14)) {
            res = bitset<14>(i).to_string();
            cout << res << " ";
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