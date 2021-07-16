#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> el[1000];
        int a, b, c, d;
        cin >> a >> b;
        for (int i = 0; i < b; i++) {
            cin >> c >> d;
            el[c].push_back(d);
        }
        for (int i = 1; i <= a; i++) {
            cout << i << ": ";
            for (int j = 0; j < el[i].size(); j++) {
                cout << el[i][j] << " ";
            }
            cout << endl;
        }
    }
}