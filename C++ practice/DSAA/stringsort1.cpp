#include <bits/stdc++.h>

using namespace std;

int main()
{
    int times;
    cin >> times;
    cin.ignore();
    while (times--)
    {
        string s;
        cin >> s;
        map<char, int> resMap;
        int maxRes = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (resMap.count(s[i]) == 0)
            {
                resMap.insert(pair<char, int>(s[i], 1));
            }
            else
            {
                resMap.find(s[i])->second++;
                if (resMap.find(s[i])->second > maxRes)
                    maxRes = resMap.find(s[i])->second;
            }
        }
        if (maxRes > (s.length() + 1) / 2)
            cout << -1;
        else
        {
            cout << 1;
        }
        cout << endl;
    }
}