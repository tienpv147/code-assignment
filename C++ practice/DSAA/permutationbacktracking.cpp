#include <bits/stdc++.h>

using namespace std;

int n, arr[100], unused[100];

void print()
{
    for (int j = 1; j <= n; j++)
    {
        cout << arr[j];
    }
    cout << " ";
}

void backTracking(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (unused[j])
        {
            arr[i] = j;
            unused[j] = 0;
            if (i == n)
                print();
            else
            {
                backTracking(i + 1);
            }
            unused[j] = 1;
        }
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        cin >> n;
        for (int j = 1; j <= n; j++)
        {
            unused[j] = 1;
        }
        backTracking(1);
        cout << endl;
    }
}
