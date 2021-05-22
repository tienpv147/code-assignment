#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string braceString;
        int left = 0, right = 0;
        cin >> braceString;
        stack<char> braces;

        for (int i = 0; i < braceString.size(); i++)
        {
            if (braceString[i] == ')')
            {
                if (braces.empty())
                {
                    right++;
                }
                else
                {
                    left--;
                    braces.pop();
                }
            }

            else
            {
                left++;
                braces.push(braceString[i]);
            }
        }

        left = left / 2 + right / 2;
        if (right & 1)
        {
            left += 2;
        }

        cout << left << endl;
    }
}