#include <bits/stdc++.h>

using namespace std;

void processing()
{
}

int main()
{
    int times;
    cin >> times;
    while (times--)
    {
        int length;
        cin >> length;

        priority_queue<long long, vector<long long>, greater<long long>> priorityQueue;
        long long x;
        for (int i = 0; i < length; i++)
        {
            cin >> x;
            priorityQueue.push(x);
        }
        long long y;
        long long sumUp = 0;
        while (priorityQueue.size() > 1)
        {
            x = priorityQueue.top();
            priorityQueue.pop();
            y = priorityQueue.top();
            priorityQueue.pop();
            priorityQueue.push((x + y));
            sumUp = sumUp + x + y;
        }
        cout << sumUp;
        cout << endl;
    }
}