#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int v, e, key, val;
        cin >> v >> e;
        vector<int> vec[v + 1];
        for (int i = 0; i < e; i++) {
            cin >> key >> val;
            vec[key].push_back(val);
            vec[val].push_back(key);
        }
        for (int i = 1; i <= v; i++) {
            sort(vec[i].begin(), vec[i].end());
        }
        for (int i = 1; i <= v; i++) {
            cout << i << ": ";
            for (int j = 0; j < vec[i].size(); j++) {
                cout << vec[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}