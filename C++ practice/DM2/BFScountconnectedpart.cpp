#include <bits/stdc++.h>

using namespace std;

int n, arr[100][100], isNotNavigated[100];

void BFS(int u)
{
    queue<int> q;
    q.push(u);
    isNotNavigated[u] = 0;
    while (!q.empty())
    {
        int first = q.front();
        q.pop();
        for (int v = 1; v <= n; v++)
        {

            if (arr[first][v] == 1 && isNotNavigated[v])
            {
                q.push(v);
                isNotNavigated[v] = 0;
            }
        }
    }
}

int countConnectedPart()
{
    int connectedParts = 0;
    for (int v = 1; v <= n; v++)
    {
        if (isNotNavigated[v])
        {
            connectedParts++;
            BFS(v);
        }
    }
    return connectedParts;
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
    for (int i = 1; i <= n; i++)
    {
        isNotNavigated[i] = 1;
    }
    int res = countConnectedPart();
    cout << res << endl;
}