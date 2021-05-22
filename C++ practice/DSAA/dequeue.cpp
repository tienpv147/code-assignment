#include <bits/stdc++.h>

using namespace std;

int main()
{
    deque<int> dequeue;
    string inputString;
    int times;
    cin >> times;
    cin.ignore();
    while (times--)
    {
        cin >> inputString;
        if (inputString == "POPFRONT")
        {
            if (dequeue.empty() == 0)
                dequeue.pop_front();
        }
        else if (inputString == "POPBACK")
        {
            if (dequeue.empty() == 0)
                dequeue.pop_back();
        }
        else if (inputString == "PRINTFRONT")
        {
            if (dequeue.empty() == 1)
                cout << "NONE" << endl;
            else
                cout << dequeue.front() << endl;
        }
        else if (inputString == "PRINTBACK")
        {
            if (dequeue.empty() == 1)
                cout << "NONE" << endl;
            else
                cout << dequeue.back() << endl;
        }
        else if (inputString == "PUSHBACK")
        {
            int pbNum;
            cin >> pbNum;
            dequeue.push_back(pbNum);
        }
        else if (inputString == "PUSHFRONT")
        {
            int pfNum;
            cin >> pfNum;
            dequeue.push_front(pfNum);
        }
    }
}