#include <bits/stdc++.h>

using namespace std;

int n, isNotNavigated[100], arr[100][100];
queue<int> q, q1;

void BFS(int u)
{
    q.push(u);
    q1.push(u);
    isNotNavigated[u] = false;
    while (!q.empty())
    {
        int first = q.front();
        q.pop();
        for (int v = 1; v <= n; v++)
        {
            if (arr[first][v] == 1 && isNotNavigated[v])
            {
                q.push(v);
                q1.push(v);
                isNotNavigated[v] = false;
            }
        }
    }
}

void reInit()
{
    for (int i = 1; i <= n; i++)
    {
        isNotNavigated[i] = true;
    }
    q1 = queue<int>();
}

void navigateTops()
{
    reInit();
    for (int u = 1; u <= n; u++)
    {
        isNotNavigated[u] = false;
        if (u != 1)
        {
            BFS(u - 1);
        }
        else
        {
            BFS(2);
        }
        if (q1.size() != n - 1)
        {
            cout << u << " ";
        }
        reInit();
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
    navigateTops();
}