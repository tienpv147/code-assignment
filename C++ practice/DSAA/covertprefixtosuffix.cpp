#include <bits/stdc++.h>

using namespace std;

int main()
{
    int times;
    cin >> times;
    while (times--)
    {
        string inputString;
        cin >> inputString;
        stack<string> stk;
        int length = inputString.size();

        for (int i = length; i >= 0; i--)
        {
            if (inputString[i] == '+' || inputString[i] == '-' || inputString[i] == '*' || inputString[i] == '/')
            {
                string a = stk.top();
                stk.pop();
                string b = stk.top();
                stk.pop();
                string temporary = a + b + inputString[i];
                stk.push(temporary);
            }
            else
                stk.push(string(1, inputString[i]));
        }
        cout << stk.top() << endl;
    }
    return 0;
}