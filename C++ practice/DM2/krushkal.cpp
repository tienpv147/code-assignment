#include <bits/stdc++.h>

using namespace std;

struct edge
{
    int h, id, n1, n2;
};

int n, A[100][100], numberOfEdge, Atree[100][100], dh;
edge edgeList[100], edgeTree[100];
bool isNotNavigated[100];

void read()
{
    cin >> n;
    numberOfEdge = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            cin >> A[i][j];
            if (A[i][j] > 0 && i < j)
            {
                numberOfEdge++;
                edgeList[numberOfEdge].h = A[i][j];
                edgeList[numberOfEdge].id = numberOfEdge;
                edgeList[numberOfEdge].n1 = i;
                edgeList[numberOfEdge].n2 = j;
            }
        }
}

void init()
{
    for (int i = 1; i <= n; i++)
        isNotNavigated[i] = true;
}

void bubblesort()
{
    for (int i = 1; i <= n; i++)
        for (int j = numberOfEdge; j > i; j--)
            if (edgeList[j].h < edgeList[j - 1].h)
            {
                edge tmp = edgeList[j - 1];
                edgeList[j - 1] = edgeList[j];
                edgeList[j] = tmp;
            }
}

void dfs(int u)
{
    isNotNavigated[u] = false;
    for (int v = 1; v <= n; v++)
    {
        if (isNotNavigated[v] == true && Atree[u][v] == 1)
            dfs(v);
    }
}

void kruskal()
{
    int net = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            Atree[i][j] = 0;
    dh = 0;
    bubblesort();
    for (int i = 1; i <= numberOfEdge; i++)
    {
        int n1 = edgeList[i].n1;
        int n2 = edgeList[i].n2;
        init();
        dfs(n1);
        if (isNotNavigated[n2] == true)
        {
            dh += edgeList[i].h;
            net++;
            edgeTree[net].n1 = n1;
            edgeTree[net].n2 = n2;
            Atree[n1][n2] = 1;
            Atree[n2][n1] = 1;
            for (int i = 1; i <= net; i++)
            {
                cout << edgeTree[i].n1 << " " << edgeTree[i].n2 << " ";
                cout << endl;
            }
        }
    }
    if (net == n - 1)
    {
        cout << "dH = " << dh << endl;
        for (int i = 1; i <= net; i++)
            cout << edgeTree[i].n1 << " " << edgeTree[i].n2 << endl;
    }
}

int main()
{
    read();
    kruskal();
}