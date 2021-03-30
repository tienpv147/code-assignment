#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int factorial(long long int i) {
    if (i <= 0) {
        return 1;
    }
    else {
        return 2 * factorial(i - 1);
    }
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        cin >> s;
        int result = 0;
        for (long long int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == '1')
            {
                result += factorial(i);
            }
        }

        if (result % 5 == 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}