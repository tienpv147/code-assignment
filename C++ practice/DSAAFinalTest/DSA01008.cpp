#include <bits/stdc++.h>

using namespace std;

int n, k;
int arr[100];

void backTracking(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        arr[i] = j;
        if (i == n)
        {
            int count = 0;
            for (int i = 1; i <= n; i++)
            {
                if (arr[i] == 1)
                {
                    count++;
                }
            }
            if (count == k)
            {
                for (int i = 1; i <= n; i++)
                {
                    cout << arr[i];
                }
                cout << endl;
            }
        }
        else
            backTracking(i + 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        backTracking(1);
    }
}