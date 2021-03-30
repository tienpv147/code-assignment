#include <bits/stdc++.h>

using namespace std;

int n, s, t, arr[100][100], isNotNavigated[100];
int frontDFS[100];
int frontBFS[100];

void DFS(int s)
{
    stack<int> st;
    st.push(s);
    isNotNavigated[s] = 0;
    while (!st.empty())
    {
        int u = st.top();
        st.pop();
        for (int v = 1; v <= n; v++)
        {
            if (arr[u][v] == 1 && isNotNavigated[v])
            {
                st.push(u);
                st.push(v);
                isNotNavigated[v] = 0;
                frontDFS[v] = u;
                break;
            }
        }
    }
    cout << endl;
}

void BFS(int s)
{
    queue<int> q;
    q.push(s);
    isNotNavigated[s] = 0;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int v = 1; v <= n; v++)
        {
            if (arr[u][v] == 1 && isNotNavigated[v])
            {
                q.push(v);
                isNotNavigated[v] = 0;
                frontBFS[v] = u;
            }
        }
    }
    cout << endl;
}


void refreshNav()
{
    for (int i = 1; i <= n; i++)
    {
        isNotNavigated[i] = 1;
        frontDFS[i] = 0;
        frontBFS[i] = 0;
    }
}

void result(int front[]) {
    if (front[t] == 0) {
        cout << "no path" << endl;
        return;
    }
    int u = front[t];
    cout << t << " ";
    while (u != s) {
        cout << u << " ";
        u = front[u];
    }
    cout << endl;
}

int main()
{
    cin >> n;
    cin >> s >> t;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> arr[i][j];
        }
    }
    refreshNav();
    DFS(s);
    result(frontDFS);
    refreshNav();
    BFS(s);
    result(frontBFS);
}