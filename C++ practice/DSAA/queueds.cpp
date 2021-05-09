#include <bits/stdc++.h>

using namespace std;

int main()
{
    int times;
    cin >> times;
    while (times--)
    {
        int commands;
        queue<int> q;
        cin >> commands;
        cin.ignore();
        while (commands--)
        {
            string commandNum;
            cin >> commandNum;
            if (commandNum == "1")
            {
                cout << q.size() << endl;
            }
            if (commandNum == "2")
            {
                if (q.empty())
                    cout << "YES" << endl;
                else
                {
                    cout << "NO" << endl;
                }
            }
            if (commandNum == "3")
            {
                int num;
                cin >> num;
                q.push(num);
            }
            if (commandNum == "4")
            {
                if (!q.empty())
                {
                    q.pop();
                }
            }
            if (commandNum == "5")
            {
                if (q.empty())
                {
                    cout << -1 << endl;
                }
                else
                {
                    cout << q.front() << endl;
                }
            }
            if (commandNum == "6")
            {
                if (q.empty())
                {
                    cout << -1 << endl;
                }
                else
                {
                    cout << q.back() << endl;
                }
            }
        }
    }
}
