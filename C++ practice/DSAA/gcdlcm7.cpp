#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long gcd(long a, long b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

long long lcm(long a, long b, long gcd) {
    return (a * b) / gcd;
}

long long res(long long max, long long remainder, int n) {
    long long limit = pow(10, n - 1);
    if (remainder == 0) {
        return limit;
    }
    limit += max - remainder;
    if (limit < pow(10, n))
        return limit;
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y, z;
        int n;
        cin >> x >> y >> z >> n;
        long long mid = lcm(x, y, gcd(x, y));
        long long max = lcm(mid, z, gcd(mid, z));
        long long limit = pow(10, n - 1);
        long long remainder = limit % max;
           
        cout << res(max, remainder, n) << endl;
    }
}