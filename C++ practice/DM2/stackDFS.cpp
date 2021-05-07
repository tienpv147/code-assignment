#include <bits/stdc++.h>

using namespace std;

int n, arr[100][100];
bool isNotNavigated[100];
stack<int> visitedPool;

void stackDFS(int i)
{
    cout << i << " ";
    visitedPool.push(i);
    isNotNavigated[i] = false;
    while (!visitedPool.empty())
    {
        int top = visitedPool.top();
        visitedPool.pop();
        for (int v = 1; v <= n; v++)
        {
            if (isNotNavigated[v] && arr[top][v] == 1)
            {
                cout << v << " ";
                isNotNavigated[v] = false;
                visitedPool.push(top);
                visitedPool.push(v);
                break;
            }
        }
    }
}

void printResult()
{
    while (!visitedPool.empty())
    {
        cout << visitedPool.top() << " ";
        visitedPool.pop();
    }
}

void init()
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
        isNotNavigated[i] = true;
    }
}

int main()
{
    init();
    stackDFS(1);
}