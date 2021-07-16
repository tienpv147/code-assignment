#include <bits/stdc++.h>

using namespace std;

int vertex, edge, u, net, top, bottom;
vector<int> adjacent[10001];
int start[1000], ending[1000];
bool isNavigated[10001];

void read()
{
    cin >> vertex >> edge >> u;
    memset(isNavigated, false, sizeof(isNavigated));
    for (int i = 0; i < 10001; i++)
    {
        adjacent[i].clear();
    }
    for (int e = 0; e < edge; e++)
    {
        cin >> top >> bottom;
        adjacent[top].push_back(bottom);
        adjacent[bottom].push_back(top);
    }
}

void dfs(int u)
{
    isNavigated[u] = true;
    for (int v = 0; v < adjacent[u].size(); v++)
    {
        if (!isNavigated[adjacent[u][v]])
        {
            start[net] = u;
            ending[net] = adjacent[u][v];
            net++;
            dfs(adjacent[u][v]);
        }
    }
}

void solve()
{
    net = 0;
    dfs(u);
    if (net == vertex - 1)
    {
        for (int i = 0; i < net; i++)
        {
            cout << start[i] << " " << ending[i] << endl;
        }
    }
    else
    {
        cout << -1 << endl;
    }
}

int main()
{
    int times;
    cin >> times;
    while (times--)
    {
        read();
        solve();
    }
}