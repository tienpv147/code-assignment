#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        set<long long> st;
        set<long long> st1;
        int a;
        for (size_t i = 0; i < m + n; i++)
        {
            cin >> a;
            if (st.count(a))
            {
                st1.insert(a);
            }
            st.insert(a);
        }
        for (set<long long>::iterator i = st.begin(); i != st.end(); i++)
        {
            cout << *i << " ";
        }
        cout << endl;
        for (set<long long>::iterator i = st1.begin(); i != st1.end(); i++)
        {
            cout << *i << " ";
        }
        cout << endl;
    }
}