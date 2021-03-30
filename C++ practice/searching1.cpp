#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    long long int t;
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
        vector<long long int>::iterator index = find(vec.begin(), vec.end(), ele);
        if (index != vec.end())
        {
            int result = index - vec.begin() + 1;
            cout << result << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}