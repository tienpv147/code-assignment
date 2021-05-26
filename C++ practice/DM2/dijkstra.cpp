#include <bits/stdc++.h>

using namespace std;

class graph
{
    int n, s, a[100][100], d[100], front[100];

public:
    int road[100];
    bool isNavigated[100];
    void read();
    void init();
    int check();
    void dijkstra();
    void out();
};

void graph::read()
{
    cin >> n >> s;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
}

void graph::init()
{
    for (int i = 1; i <= n; i++)
    {
        isNavigated[i] = false;
        road[i] = -1;
        d[i] = INT_MAX;
    }
}

int graph::check()
{
    for (int i = 1; i <= n; i++)
        if (isNavigated[i] == false)
            return 0;
    return 1;
}

void graph::dijkstra()
{
    d[s] = 0, road[s] = 0, isNavigated[s] = true;
    int stop = 1;
    for (int i = 1; i <= n; i++)
        if (a[s][i] > 0)
        {
            stop = 0;
            d[i] = a[s][i];
            front[i] = s;
        }
    if (!stop)
    {
        while (!check())
        {
            int min = INT_MAX, key;
            for (int i = 1; i <= n; i++)
            {
                if (!isNavigated[i] && d[i] > 0)
                {
                    if (min > d[i])
                    {
                        min = d[i];
                        key = i;
                    }
                }
            }
            // {

            road[key] = road[front[key]] + a[front[key]][key];
            isNavigated[key] = true;
            // }
            for (int i = 1; i <= n; i++)
            {
                if (isNavigated[i] == false && a[key][i] > 0 && d[i] > d[key] + a[key][i])
                {
                    d[i] = d[key] + a[key][i];
                    front[i] = key;
                }
            }
        }
    }
}

void graph::out()
{
    for (int i = 1; i <= n; i++)
    {
        int k = i;
        if (!isNavigated[k])
            cout << "K/c " << s << " -> " << k << " = INF"
                 << ";" << endl;
        else
        {
            cout << "K/c " << s << " -> " << k << " = " << road[k] << ";\t" << k;
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
    graph g;
    g.read();
    g.init();
    g.dijkstra();
    g.out();
}