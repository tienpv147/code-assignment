#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int fibo(int n)
{
    int f0 = 0;
    int f1 = 1;
    int f2 = 0;
    const long divisor = pow(10, 9) + 7;
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    for (int i = 2; i <= n; i++)
    {
        f2 = (f0 + f1) % divisor;
        f0 = f1;
        f1 = f2;
    }
    return f2;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << fibo(n) << endl;
    }
}