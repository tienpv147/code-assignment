#include <bits/stdc++.h>

using namespace std;

int n, nav[100], arr[100][100];
queue<int> q, q1;

void BFS(int u)
{
    q.push(u);
    q1.push(u);
    nav[u] = false;
    while (!q.empty())
    {
        int first = q.front();
        q.pop();
        for (int v = 1; v <= n; v++)
        {
            if (arr[first][v] == 1 && nav[v])
            {
                q.push(v);
                q1.push(v);
                nav[v] = false;
            }
        }
    }
}

void reInit()
{
    for (int i = 1; i <= n; i++)
    {
        nav[i] = true;
    }
    q1 = queue<int>();
}

void navigateBridgeEdges()
{
    reInit();
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (arr[i][j])
            {
                arr[i][j] = 0;
                arr[j][i] = 0;
                BFS(1);
                if (q1.size() != n)
                {
                    cout << i << " " << j << endl;
                }
                reInit();
                arr[i][j] = 1;
                arr[j][i] = 1;
            }
        }
    }
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> arr[i][j];
        }
    }
    navigateBridgeEdges();
}