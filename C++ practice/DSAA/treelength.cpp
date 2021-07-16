#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> vec(100010);
bool check[100010];
int v, maxLevel, level[100010];

void resolve() {

}

void DFS(int des)
{
    check[des] = true;

    for (int i = 0; i < vec[des].size(); i++)
    {
        if (!check[vec[des][i]])
        {
            level[vec[des][i]] = level[des] + 1;
            maxLevel = max(maxLevel, level[vec[des][i]]);
            DFS(vec[des][i]);
        }
    }
}

void getTree()
{
    int des, next;
    for (int i = 0; i < v - 1; i++)
    {
        cin >> des >> next;
        vec[des].push_back(next);
    }
}

void resetTree()
{
    memset(level, 0, sizeof(level));
    memset(check, false, sizeof(check));
    maxLevel = 0;

    for (int i = 0; i < v + 1; i++)
    {
        vec[i].clear();
    }
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
        DFS(1);
        cout << maxLevel << endl;
    }
    return 0;
}