#include <bits/stdc++.h>

using namespace std;

class Graph
{
    int n, k, dh, ne, key;
    int a[100][100], V[100], VH[100];

public:
    bool navigated[100];
    void read();
    void init();
    void prim();
};

void Graph::read()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
}

void Graph::init()
{
    for (int i = 1; i <= n; i++)
    {
        navigated[i] = false;
    }
}

void Graph::prim()
{
    init();
    int dh = 0, ne = 0, key = 0;
    navigated[k] = true;
    while (ne < n - 1)
    {
        int min = INT_MAX;
        for (int i = 1; i <= n; i++)
        {
            if (navigated[i])
            {
                for (int j = 1; j <= n; j++)
                {
                    if (a[i][j] > 0 && !navigated[j] && a[i][j] < min)
                    {
                        min = a[i][j];
                        VH[ne] = i;
                        V[ne] = j;
                        key = j;
                    }
                }
            }
        }
        navigated[key] = true;
        dh += min;
        ne++;
    }
    cout << "dH = " << dh << endl;
    for (int i = 0; i < n - 1; i++)
    {
        cout << VH[i] << " " << V[i] << endl;
    }
}

int main()
{
    Graph g;
    g.read();
    g.prim();
}