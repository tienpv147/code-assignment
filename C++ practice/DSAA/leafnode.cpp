#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> vec(1005);
int v, level[1005];
vector<int> checkNode;
bool check[1005], parents[1005], children[1005];

void DFS(int u)
{
    check[u] = true;

    for (int i = 0; i < vec[u].size(); i++)
    {
        if (!check[vec[u][i]])
        {
            level[vec[u][i]] = level[u] + 1;
            DFS(vec[u][i]);
        }
    }
}

void getTree()
{
    int pa, ch;
    string side;
    for (int i = 0; i < v; i++)
    {
        cin >> pa >> ch >> side;
        vec[pa].push_back(ch);
        vec[ch].push_back(pa);
        parents[pa] = true;
        children[ch] = true;
    }
}

void resetTree()
{
    checkNode.clear();
    for (int i = 0; i < 1005; i++)
    {
        vec[i].clear();
    }
    memset(level, 0, sizeof(level));
    memset(check, false, sizeof(check));
    memset(parents, false, sizeof(parents));
    memset(children, false, sizeof(children));
}

void resolve()
{
    int pa;
    for (int i = 0; i < 1005; i++)
    {
        if (children[i] && !parents[i])
        {
            checkNode.push_back(i);
        }
        else if (!children[i] && parents[i])
        {
            pa = i;
        }
    }

    level[pa] = 0;
    DFS(pa);

    for (int i = 1; i < checkNode.size(); i++)
    {
        if (level[checkNode[i]] != level[checkNode[i - 1]])
        {
            cout << 0 << endl;
            return;
        }
    }
    cout << 1 << endl;
}

int main()
{
    int times;
    cin >> times;
    while (times--)
    {
        cin >> v;
        resetTree();
        getTree();
        resolve();
    }
}
