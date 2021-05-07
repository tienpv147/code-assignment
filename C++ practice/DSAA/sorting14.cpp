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
        int n, m, count = 0, index = 0;
        cin >> n;
        vector<int> vec;
        for (int i = 0; i < n; i++)
        {
            cin >> m;
            vec.push_back(m);
        }
        // sap xep vector
        sort(vec.begin(), vec.end());

        // xoa phan tu trung
        vec.erase(unique(vec.begin(), vec.end()), vec.end());

        // ket qua
        int result = vec.back() - vec.front() + 1 - vec.size();
        if (result > 0)
        {
            cout << result << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
}