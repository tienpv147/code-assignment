#include <bits/stdc++.h>

using namespace std;

long long fiboNacci[100];

char fiboNacciRec(int n, long long flag)
{
    if (n == 1)
    {
        return 'A';
    }
    if (n == 2)
    {
        return 'B';
    }
    if (flag <= fiboNacci[n - 2])
    {
        return fiboNacciRec(n - 2, flag);
    }
    return fiboNacciRec(n - 1, flag - fiboNacci[n - 2]);
}

int main()
{
    int times;
    cin >> times;
    fiboNacci[1] = fiboNacci[2] = 1;
    for (int f = 3; f <= 92; f++)
    {
        fiboNacci[f] = fiboNacci[f - 1] + fiboNacci[f - 2];
    }
    while (times--)
    {
        int n;
        long long flag;
        cin >> n >> flag;
        cout << fiboNacciRec(n, flag) << endl;
    }
}