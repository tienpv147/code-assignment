#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> st;
    string input;
    while (cin >> input)
    {
        if (input == "show")
        {
            if (st.empty())
            {
                cout << "empty" << endl;
            }
            else
            {
                stack<int> showSt = st;
                vector<int> outputStack;
                while (!showSt.empty())
                {
                    outputStack.push_back(showSt.top());
                    showSt.pop();
                }
                for (int i = outputStack.size() - 1; i >= 0; i--)
                {
                    cout << outputStack[i] << " ";
                }
                cout << endl;
            }
        }
        else if (input == "pop")
        {
            st.pop();
        }
        else
        {
            int num;
            cin >> num;
            st.push(num);
        }
    }
}