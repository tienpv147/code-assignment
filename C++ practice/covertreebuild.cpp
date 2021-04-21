#include <bits/stdc++.h>

using namespace std;

int n, k, net;
int a[100][100], start[100], ending[100];
bool isNavigated[100];

void read()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
}

void init()
{
    for (int i = 1; i <= n; i++)
        isNavigated[i] = false;
}

void dfs(int u)
{
    isNavigated[u] = true;
    for (int i = 1; i <= n; i++)
    {
        if (a[u][i] == 1 && isNavigated[i] == false)
        {
            start[net] = u;
            ending[net] = i;
            net++;
            dfs(i);
        }
    }
}

void solve()
{
    init();
    net = 0;
    dfs(k);
    if (net == n - 1)
    {
        cout << "DFS tree" << endl;
        for (int i = 0; i < net; i++)
            cout << start[i] << " " << ending[i] << endl;
    }
}

void bfstree()
{
    init();
    queue<int> q;
    net = 0;
    q.push(k);
    isNavigated[k] = true;
    while (!q.empty())
    {
        int t = q.front();
        q.pop();
        for (int i = 1; i <= n; i++)
        {
            if (a[t][i] == 1 && isNavigated[i] == false)
            {
                q.push(i);
                start[net] = t;
                ending[net] = i;
                net++;
                isNavigated[i] = true;
            }
        }
    }
    if (net == n - 1)
    {
        cout << "BFS tree" << endl;
        for (int i = 0; i < net; i++)
        {
            cout << start[i] << " " << ending[i] << endl;
        }
    }
}

int main()
{
    read();
    solve();
    bfstree();
}