#include <bits/stdc++.h>

using namespace std;

void resolve()
{
}

int main()
{
    int times;
    cin >> times;
    while (times--)
    {
        int vertex, edge, key, value;
        cin >> vertex >> edge;
        vector<int> storeVec[vertex + 1];
        for (int i = 0; i < edge; i++)
        {
            cin >> key >> value;
            storeVec[key].push_back(value);
            storeVec[value].push_back(key);
        }
        for (int i = 1; i <= vertex; i++)
        {
            sort(storeVec[i].begin(), storeVec[i].end());
        }
        for (int i = 1; i <= vertex; i++)
        {
            cout << i << ": ";
            for (int j = 0; j < storeVec[i].size(); j++)
            {
                cout << storeVec[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}