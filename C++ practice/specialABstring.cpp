#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

int max(int n)
{
    int sum = 0;
    for (size_t i = 1; i <= n; i++)
    {
        sum += pow(2, i);
    }
    return sum;
}

int main()
{
    int n, k;
    cin >> n >> k;
    queue<string> q;
    vector<string> vec;

    q.push("A");
    q.push("B");

    int count = 1;
    while (count <= max(n))
    {
        q.push(q.front() + "A");
        q.push(q.front() + "B");
        vec.push_back(q.front());
        q.pop();
        count++;
    }
    // for (auto it = vec.begin() + max(n - 1); it != vec.end(); it++)
    // {
    //     cout << *it << endl;
    // }
    int c = 0;
    vector<string> result;
    for (size_t i = 0; i < vec.size(); i++)
    {
        if (vec[i].length() == n)
        {
            int count = 0;
            for (size_t j = 0; j < vec[i].length() - k + 1; j++)
            {
                if (vec[i][j] == 'A' && vec[i][j + 1] == 'A' && vec[i][j + 2] == 'A')
                    count++;
            }
            if (count == 1 && vec[i].find("B") != string::npos)
            {
                result.push_back(vec[i]);
                c++;
            }
        }
    }
    cout << c << endl;
    sort(result.begin(), result.end());
    for (size_t i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
}