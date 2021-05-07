#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long lcm(long long a, long long b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, lcmNumber = 1;
        cin >> n;
        for (int i = 2; i <= n; i++)
        {
            lcmNumber = lcm(lcmNumber, i);
        }
        cout << lcmNumber << endl;
    }
}