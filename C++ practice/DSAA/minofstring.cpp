#include <bits/stdc++.h>

using namespace std;

int spec()
{
}

int compare(pair<char, int> a, pair<char, int> b)
{
    return a.second > b.second;
}

int main()
{
    int times;
    cin >> times;
    cin.ignore();
    while (times--)
    {
        int k;
        cin >> k;
        string s;
        cin >> s;
        map<char, int> charSaver;
        for (int i = 0; i < s.length(); i++)
        {
            if (charSaver.count(s[i]) == 0)
            {
                charSaver.insert(pair<char, int>(s[i], 1));
            }
            else
            {
                charSaver.find(s[i])->second++;
            }
        }
        vector<pair<char, int>> pairs(charSaver.begin(), charSaver.end());
        sort(pairs.begin(), pairs.end(), compare);
        while (k--)
        {
            pairs.front().second -= 1;
            sort(pairs.begin(), pairs.end(), compare);
        }
        int sum = 0;

        for (int j = 0; j < pairs.size(); j++)
        {
            sum += pow(pairs[j].second, 2);
        }
        cout << sum << endl;
    }
}