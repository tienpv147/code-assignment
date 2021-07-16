#include <bits/stdc++.h>

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s; 
        cin >> s;
        stack<string> st;

        for (int i = s.size() - 1; i >= 0; i--) 
        {
            string x;
            x = s[i];
            if (x == "+" || x == "-" || x == "*" || x == "/") 
            {
                string temp1 = st.top();
                st.pop();
                string temp2 = st.top();
                st.pop();	
                string res = temp1 + temp2 + x;
                st.push(res);
		    }
		    else
			st.push(string(1, s[i]));
		}
        
        cout << st.top() << endl;
    }
}