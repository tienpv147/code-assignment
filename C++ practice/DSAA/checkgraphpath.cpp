#include <bits/stdc++.h>

using namespace std;

vector<int> ke[1001];
bool quinn[1001];
int truoc[1001];
int m, n;
void DFS(int u, int v)
{
    if (quinn[v])
        return;
    quinn[u] = true;
    for (int i = 0; i < ke[u].size(); i++)
    {
        if (!quinn[ke[u][i]])
        {
            truoc[ke[u][i]];
            DFS(ke[u][i], v);
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (int i = 0; i < 1001; i++)
        {
            ke[i].clear();
        }

        for (int i = 0; i < m; i++)
        {
            int u, v;
            cin >> u >> v;
            ke[u].push_back(v);
            ke[v].push_back(u);
        }
        int q;
        cin >> q;
        while (q--)
        {
            memset(quinn, false, sizeof(quinn));
            int x, y;
            cin >> x >> y;
            DFS(x, y);
            if (!quinn[y])
            {
                cout << "NO";
            }
            else
            {
                cout << "YES";
            }
            cout << endl;
        }

        cout << endl;
    }
}