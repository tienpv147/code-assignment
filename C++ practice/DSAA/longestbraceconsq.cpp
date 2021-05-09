#include <bits/stdc++.h>

using namespace std;

int main()
{

    int times;
    cin >> times;
    while (times--)
    {
        stack<int> resStack;
        string input;
        cin >> input;
        resStack.push(-1);
        int res = 0;
        for (int i = 0; i < input.length(); i++)
        {
            if (input[i] == '(')
            {
                resStack.push(i);
            }
            if (input[i] == ')')
            {
                resStack.pop();
                if (!resStack.empty())
                {
                    res = max(res, i - resStack.top());
                }
                else if (resStack.size() == 0)
                {
                    resStack.push(i);
                }
            }
        }
        cout << res << endl;
    }
}