#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<int> adjacent[1001];
bool isNavigated[1001];
int front[1001];

void DFS(int u, int v)
{
    if (isNavigated[v])
        return;
    isNavigated[u] = true;
    for (int i = 0; i < adjacent[u].size(); i++)
    {
        if (!isNavigated[adjacent[u][i]])
        {
            front[adjacent[u][i]];
            DFS(adjacent[u][i], v);
        }
    }
}

void clear()
{
    for (int i = 0; i < 1001; i++)
    {
        adjacent[i].clear();
    }
}

void input()
{
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adjacent[u].push_back(v);
        adjacent[v].push_back(u);
    }
}

int main()
{
    int times;
    cin >> times;
    while (times--)
    {
        cin >> n >> m;
        clear();
        input();
        int question;
        cin >> question;
        while (question != 0)
        {
            memset(isNavigated, false, sizeof(isNavigated));
            int x, y;
            cin >> x >> y;
            DFS(x, y);
            if (!isNavigated[y])
            {
                cout << "NO";
            }
            else
            {
                cout << "YES";
            }
            cout << endl;
            question--;
        }
        cout << endl;
    }
}