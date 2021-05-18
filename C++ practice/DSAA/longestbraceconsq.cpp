#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        cin >> s;
        stack<int> st;
        int res = 0;
        st.push(-1);
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
            {
                st.push(i);
            }
            else
            {
                st.pop();
                if (st.size() > 0)
                {
                    res = max(res, i - st.top());
                }
                if (st.size() == 0)
                {
                    st.push(i);
                }
            }
        }
        cout << res << endl;
    }
}