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
        int inx;
        cin >> n >> inx;
        int count = 0;
        int flag = 0;
        for (size_t i = 2; i <= n; i++)
        {
            while (n % i == 0)
            {
                count++;
                n /= i;
                if (count == inx)
                {
                    cout << i;
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 0)
        {
            cout << -1;
        }
        cout << endl;
    }
    return 0;
}