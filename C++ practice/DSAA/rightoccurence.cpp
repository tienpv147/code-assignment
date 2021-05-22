#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#include <map>
#include <set>
#include <math.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> vec;
        set<int> st;
        map<int, int> mp;
        int a;
        for (size_t i = 0; i < n; i++)
        {
            cin >> a;
            vec.push_back(a);
        }

        for (auto i = vec.begin(); i != vec.end(); i++)
        {
            if (mp.count(*i) == 0)
                mp[*i] = 1;
            else
            {
                mp[*i]++;
            }
        }
        int appear[n];
        // cout << endl;
        for (size_t i = 0; i < n; i++)
        {
            appear[i] = mp[vec[i]];
            // cout << appear[i] << " ";
        }
        // cout << endl;
        for (size_t i = 0; i < n; i++)
        {
            for (size_t j = i + 1; j <= n; j++)
            {
                if (i == n - 1 || j == n)
                {
                    cout << -1 << " ";
                }

                else if (appear[j] > appear[i])
                {
                    cout << vec[j] << " ";
                    break;
                }
            }
        }
    }
}