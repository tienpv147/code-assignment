#include <bits/stdc++.h>

using namespace std;

int n = 0, arr[100][100];
bool isNotNavigated[100];

void recursiveDFS(int i)
{
    cout << i << " ";
    isNotNavigated[i] = false;
    for (int v = 1; v <= n; v++)
    {
        if ((arr[i][v] == 1) && (isNotNavigated[v])) {
            recursiveDFS(v);
        }
    }
}

void init() {
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int j = 1; j <= n; j++)
    {
        isNotNavigated[j] = true;
    }
}

int main()
{
    init();   
    recursiveDFS(1);
}