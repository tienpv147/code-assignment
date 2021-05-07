#include <bits/stdc++.h>

using namespace std;

long long n;

long long doubleCon(long long k)
{
    long long temporary = pow(2, n - 1);
    if (k == temporary)
    {
        return n;
    }
    if (k < temporary)
    {
        n--;
        return doubleCon(k);
    }
    if (k > temporary)
    {
        n--;
        return doubleCon(k - temporary);
    }
}

int main()
{
    int times;
    cin >> times;
    while (times--)
    {
        long long k;
        cin >> n >> k;
        cout << doubleCon(k) << endl;
    }
}