#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int n = 0, isNotNavigated[100], arr[100][100];

void mazeBackTracking(int k)
{
    cout << k;
    isNotNavigated[k] = false;
    for (int v = 1; v <= n; v++)
    {
        if (arr[k][v] == 1 && isNotNavigated[v])
            mazeBackTracking(v);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            isNotNavigated[i] = true;
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> arr[i][j];
            }
        }
        mazeBackTracking(1);
    }
}