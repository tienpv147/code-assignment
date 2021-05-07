#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n;
        set<int> arrSet;
        for (int i = 0; i < n; i++)
        {
            cin >> m;
            arrSet.insert(m);
        }
        if (arrSet.size() == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            set<int>::iterator begin = arrSet.begin();
            cout << *begin << " ";
            begin++;
            cout << *begin << endl;
        }
    }
}
