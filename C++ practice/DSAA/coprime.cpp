#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int gcm(int a, int b)
{
    if (a == 0)
        return b;
    return gcm(b % a, a);
}

int isPrime(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {

            return 0;
        }
    }
    return 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int count = 0, fx = 1;
        for (int i = 1; i <= x; i++)
        {
            if (gcm(i, x) == 1)
            {
                count++;
            }
        }

        if(!isPrime(count)) {
            fx = 0;
        }
        cout << fx << endl;
    }
}