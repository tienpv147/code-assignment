#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, num, pivot, count = 0;
        cin >> n >> num;
        for (int i = 0; i < n; i++)
        {
            cin >> pivot;
            if (pivot == num)
            {
                count++;
            }
        }
        if (count == 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << count << endl;
        }
    }
}