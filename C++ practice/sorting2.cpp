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
    while (t--)
    {
        int n, subtractor, val;
        cin >> n >> subtractor;
        vector<pair<int, int> > map;
        for (int i = 0; i < n; i++)
        {
            cin >> val;
            map.push_back(make_pair(val, abs(subtractor - val)));
        }
        sort(map.begin(), map.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
            // if (a.second == b.second && a.first < b.first)
            // {
            //     return a.first < b.first;
            // }
            return a.second < b.second;
        });

        for (vector<pair<int, int> >::iterator i = map.begin(); i != map.end(); i++) {
            cout << i->first << " ";
        }
        cout << endl;
    }
}