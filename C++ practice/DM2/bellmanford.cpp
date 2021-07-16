#include <bits/stdc++.h>

#define inf 1e9

using namespace std;

int n, s, adjacent[100][100], front[100], d[100];

void input()
{
    cin >> n >> s;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> adjacent[i][j];
}
void init()
{
    for (int i = 1; i <= n; i++)
        d[i] = inf;
}
void bellmanFord()
{
    for (int i = 1; i <= n; i++)
    {
        front[i] = s;
        if (adjacent[s][i] != 0)
            d[i] = adjacent[s][i];
    }
    d[s] = 0;
    for (int i = 1; i <= n - 2; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j != s)
            {
                for (int l = 1; l <= n; l++)
                {
                    if (d[j] > d[l] + adjacent[l][j] && adjacent[l][j] != 0)
                    {
                        d[j] = d[l] + adjacent[l][j];
                        front[j] = l;
                    }
                }
            }
        }
    }
}
void print()
{
    for (int i = 1; i <= n; i++)
    {
        int k = i;
        if (d[k] == inf)
            cout << "K/c " << s << " -> " << k << " = INF;" << endl;
        else
        {
            cout << "K/c " << s << " -> " << k << " = " << d[k] << ";\t" << k;
            if (k == s)
                cout << " <- " << k;
            else
            {
                while (k != s)
                {
                    cout << " <- " << front[k];
                    k = front[k];
                }
            }
            cout << endl;
        }
    }
}

int main()
{
    input();
    init();
    bellmanFord();
    print();
}
