#include <bits/stdc++.h>

using namespace std;

int main()
{
    int times;
    cin >> times;
    while (times--)
    {
        queue<int> q;
        int divisor;
        cin >> divisor;
        q.push(9);

        while ((q.front() % divisor) != 0)
        {
            int firstEle = q.front();
            q.push(firstEle * 10);
            q.push(firstEle * 10 + 9);
            q.pop();
        }
        cout << q.front() << endl;
    }
}