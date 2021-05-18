#include <bits/stdc++.h>

using namespace std;

vector<int> adjacent[1001];
bool isNotNavigated[1001];
int front[1001], n;

void dfs(int u)
{
    isNotNavigated[u] = false;
    for (int v = 0; v < adjacent[u].size(); v++)
    {
        if (isNotNavigated[adjacent[u][v]])
        {
            front[adjacent[u][v]];
            dfs(adjacent[u][v]);
        }
    }
}

int connectedPaths()
{
    int countConnectedPath = 0;
    for (int i = 1; i <= n; i++)
    {
        if (isNotNavigated[i])
        {
            countConnectedPath++;
        }
    }
    return countConnectedPath;
}

void clear()
{
    for (int i = 0; i < 1001; i++)
    {
        adjacent[i].clear();
    }
}

int main()
{
    int times;
    cin >> times;
    while (times--)
    {
        cin >> n;
        clear();
        memset(isNotNavigated, true, sizeof(isNotNavigated));
        for (int i = 0; i < n - 1; i++)
        {
            int u, v;
            cin >> u >> v;
            adjacent[u].push_back(v);
            adjacent[v].push_back(u);
        }
        dfs(1);
        if (connectedPaths() == 0)
        {
            cout << "YES";
        }
        else
            cout << "NO";
        cout << endl;
    }
}