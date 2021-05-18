#include <bits/stdc++.h>
#define MAX 100
using namespace std;

struct edg
{ //danh sach  canh
    int h, id, n1, n2;
};

class dothi
{
    int n, A[MAX][MAX], ne, Atree[MAX][MAX], dh; //ne : so canh, Atree : ma  tran ke tree
    edg edglst[MAX], edgtree[MAX];               //edgtree : ds canh cua cay
public:
    bool chuaxet[MAX];
    void read();
    void init();
    void dfs(int u);
    void bubblesort();
    void kruskal();
};

void dothi::read()
{
    cin >> n;
    ne = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            cin >> A[i][j];
            if (A[i][j] > 0 && i < j)
            {
                ne++;
                edglst[ne].h = A[i][j];
                edglst[ne].id = ne;
                edglst[ne].n1 = i;
                edglst[ne].n2 = j;
            }
        }
}

void dothi::init()
{
    for (int i = 1; i <= n; i++)
        chuaxet[i] = true;
}

void dothi::bubblesort()
{
    for (int i = 1; i <= n; i++)
        for (int j = ne; j >= i + 1; j--)
            if (edglst[j].h < edglst[j - 1].h)
            {
                edg tmp = edglst[j - 1];
                edglst[j - 1] = edglst[j];
                edglst[j] = tmp;
            }
}

void dothi::kruskal()
{
    int net = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            Atree[i][j] = 0;
    dh = 0;
    bubblesort();
    for (int i = 1; i <= ne; i++)
    {
        int n1 = edglst[i].n1;
        int n2 = edglst[i].n2;
        init();
        dfs(n1);
        if (chuaxet[n2] == true)
        { //khong tao chu trinh, bo sung canh vao cay
            dh += edglst[i].h;
            net++;
            edgtree[net].n1 = n1;
            edgtree[net].n2 = n2;
            Atree[n1][n2] = 1;
            Atree[n2][n1] = 1;
        }
    }
    //cout << net;
    if (net == n - 1)
    {
        cout << "dH = " << dh << endl;
        for (int i = 1; i <= net; i++)
            cout << edgtree[i].n1 << " " << edgtree[i].n2 << endl;
    }
}

void dothi::dfs(int u)
{
    chuaxet[u] = false;
    for (int v = 1; v <= n; v++)
    {
        if (chuaxet[v] == true && Atree[u][v] == 1)
            dfs(v);
    }
}

int main()
{
    dothi g;
    g.read();
    g.kruskal();
    return 0;
}