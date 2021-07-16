#include <bits/stdc++.h>

using namespace std;

int notNav[1005];
vector<int> al[1005];

void DFS(int u) {
    notNav[u] = false;
    cout << u << " ";
    for (int i = 0; i < al[u].size(); i++) {
        if (notNav[al[u][i]]) {
            DFS(al[u][i]);
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        memset(notNav, true, sizeof(notNav));
        for (int i = 0; i < 1005; i++) {
            al[i].clear();
        }
        int x, y, u, key, value;
        cin >> x >> y >> u;
        for (int i = 0; i < y; i++) {
            cin >> key >> value;
            al[key].push_back(value);
            al[value].push_back(key);
        }
        DFS(u);
        cout << endl;
    }
}