#include <bits/stdc++.h>

using namespace std;

bool isNotNavigated[1500];
vector<int> adjacent[1500];

void resolve()
{
}

void BFS(int u)
{
    queue<int> que;
    que.push(u);
    isNotNavigated[u] = 0;
    cout << u << " ";

    while (!que.empty())
    {
        int first = que.front();
        que.pop();
        for (int v = 0; v < adjacent[first].size(); v++)
        {
            if (isNotNavigated[adjacent[first][v]])
            {
                que.push(adjacent[first][v]);
                cout << adjacent[first][v] << " ";
                isNotNavigated[adjacent[first][v]] = false;
            }
        }
    }
}

int main()
{
    int times;
    cin >> times;
    while (times--)
    {
        for (int i = 0; i < 1500; i++)
        {
            adjacent[i].clear();
        }

        int vertex, edge, u;
        cin >> vertex >> edge >> u;
        for (int i = 0; i <= 1000; i++)
        {
            isNotNavigated[i] = true;
        }
        for (int i = 0; i < edge; i++)
        {
            int top, bot;
            cin >> top >> bot;
            adjacent[top].push_back(bot);
        }

        BFS(u);
        cout << endl;
    }
}