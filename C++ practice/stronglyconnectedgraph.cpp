#include <bits/stdc++.h>

using namespace std;

int n, isNotNavigated[100], arr[100][100];
queue<int> q, q1;

int BFS(int u)
{
    q.push(u);
    q1.push(u);
    isNotNavigated[u] = false;
    while (!q.empty())
    {
        int top = q.front();
        q.pop();
        for (int v = 1; v <= n; v++)
        {
            if (arr[u][v] == 1 && isNotNavigated[v])
            {
                q.push(v);
                q1.push(v);
                isNotNavigated[v] = false;
            }
        }
    }
}

bool reInit()
{
    for (int i = 1; i <= n; i++)
    {
        isNotNavigated[i] = true;
    }
    q1 = queue<int>();
}

bool isStronglyConnected()
{
    reInit();
    for (int i = 1; i <= n; i++)
    {
        BFS(i);
        if (q1.size() != n)
            return false;
        else
            reInit();
    }
    return true;
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
    if (isStronglyConnected())
        cout << "strongly connected" << endl;
    else
        cout << "not strongly connected" << endl;
}