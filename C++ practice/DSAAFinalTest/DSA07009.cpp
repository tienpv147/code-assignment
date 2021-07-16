#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s;
    cin >> s;
    stack<string> st;
    for (int i = s.size() - 1; i >= 0; i--) {
        string par;
        par = s[i];
        if (par == "+" || par == "-" || par == "*" || par == "/") {
            string op1 = st.top();
            st.pop();
            string op2 = st.top();
            st.pop();
            string res = "(" + op1 + par + op2 + ")";
            st.push(res);
        }
        else
            st.push(par);
    }
    while (!st.empty()) {
        cout << st.top();
        st.pop();
    }
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