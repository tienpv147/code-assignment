#include <bits/stdc++.h>

using namespace std;

int n, arr[100], count = 1, specCounts = 0, column[100], upward[100], downward[100];

void backTracking(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (column[j] && upward[i - j + n] && downward[i + j - 1])
        {
            arr[i] = j;
            column[j] = 0;
            upward[i - j + n] = 0;
            downward[i + j - 1] = 0;
            if (i == n)
                specCounts++;
            else
                backTracking(i + 1);
            column[j] = 1;
            upward[i - j + n] = 1;
            downward[i + j - 1] = 1;
        }
    }
    return;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i < 100; i++)
        {
            column[i] = 1;
            upward[i] = 1;
            downward[i] = 1;
        }
        backTracking(1);
        cout << specCounts << endl;
        specCounts = 0;
    }
}