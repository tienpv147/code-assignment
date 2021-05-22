#include <bits/stdc++.h>

using namespace std;

int main()
{
    int times;
    cin >> times;
    for (int i = times; i > 0; i--)
    {
        queue<long long> que;
        long long n;
        cin >> n;
        int portugalNums = 0;

        que.push(1);
        while (que.front() <= n)
        {
            que.push(que.front() * 10);
            que.push(que.front() * 10 + 1);
            que.pop();
            portugalNums++;
        }

        cout << portugalNums;
        cout << endl;
    }
}