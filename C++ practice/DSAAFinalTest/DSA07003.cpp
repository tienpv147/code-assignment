#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    getline(cin, s);
    stack<char> st;
    int ok;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ')')
        {
            ok = true;
            int top = st.top();
            st.pop();
            while (st.top() != '(')
            {
                if (st.top() == '+' || st.top() == '-' || st.top() == '*' || st.top() == '/')
                    ok = false;
                st.pop();
            }

            if (ok)
                break;
        }
        else
            st.push(s[i]);
    }
    if (ok)
        cout << "Yes";
    else
        cout << "No";
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        solve();
    }
}