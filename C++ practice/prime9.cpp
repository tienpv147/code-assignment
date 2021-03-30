#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        for (size_t i = 2; i <= n; i++)
        {
            if (n % i == 0)
            {
                cout << i << " ";
            }
            int count = 0;
            while (n % i == 0)
            {
                count++;
                n /= i;
            }
            if (count != 0)
                cout << count << " ";
        }
        cout << endl;
    }
    return 0;
}