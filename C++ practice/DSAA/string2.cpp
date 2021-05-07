#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    int result = 0;
    while (t--)
    {
        string s;
        cin >> s;
        for (size_t i = 0; i < s.size(); i++)
        {
            if (i % 2 == 0)
            {
                result += s[i] - '0';
            }
            else
            {
                result -= s[i] - '0';
            }
        }

        if (result % 11 == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
}