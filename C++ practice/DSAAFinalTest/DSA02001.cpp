#include <bits/stdc++.h>

using namespace std;

int n, col;
int arr[105][105];
void backTracking(int i)
{
    if (i > n)
    {
        return;
    }
    cout << "[";
    for (int j = 1; j < col; j++)
    {
        arr[i][j] = arr[i - 1][j] + arr[i - 1][j + 1];
        if (j == col - 1)
        {
            cout << arr[i][j] << "]" << endl;
        }
        else
        {
            cout << arr[i][j] << " ";
        }
    }
    col--;
    backTracking(i + 1);
}

void solve()
{
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        col = n;
        memset(arr, 0, sizeof(arr));
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[1][i];
        }
        cout << "[";
        for (int i = 1; i < n; i++)
        {
            cout << arr[1][i] << " ";
        }
        cout << arr[1][n] << "]" << endl;
        backTracking(2);
    }
}