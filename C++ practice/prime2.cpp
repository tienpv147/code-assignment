#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, a;
        cin >> n;
        for (size_t i = 2; i <= sqrt(n); i++)
        {

            while (n % i == 0)
            {
                n /= i;
            }
            a = i;
        }
        if (n > 1)
            cout << n;
        else 
            cout << a;
        cout << endl;
    }
    return 0;
}