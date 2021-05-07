#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

bool twoFac(pair<int, int> &a, pair<int, int> &b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, val;
        cin >> n;
        vector<int> vec, eleVec;
        vector<pair<int, int>> sortMap;
        for (int i = 0; i < n; i++)
        {
            cin >> val;
            vec.push_back(val);
        }
        eleVec = vec;
        sort(vec.begin(), vec.end());
        vec.erase(unique(vec.begin(), vec.end()), vec.end());
        for (int i = 0; i < vec.size(); i++)
        {
            sortMap.push_back(make_pair(vec[i], count(eleVec.begin(), eleVec.end(), vec[i])));
        }
        sort(sortMap.begin(), sortMap.end(), twoFac);

        for (int i = 0; i < sortMap.size(); i++)
        {
            while (sortMap[i].second--)
            {
                cout << sortMap[i].first << " ";
            }
        }
        cout << endl;
    }
}