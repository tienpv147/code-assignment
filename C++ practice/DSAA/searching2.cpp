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
        long long int n, m, ele;
        cin >> n >> ele;
        vector<long long int> vec;
        for (int i = 0; i < n; i++)
        {
            cin >> m;
            vec.push_back(m);
        }
        if (find(vec.begin(), vec.end(), ele) != vec.end())
        {
            cout << 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}