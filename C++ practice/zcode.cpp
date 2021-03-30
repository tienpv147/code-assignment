#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    unsigned long long int m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        int max = 0;

        while (m % 2 == 0)
        {
            m /= 2;
        }

        for (int j = 3; j <= sqrt(m); j = j + 2)
        {
            while (m % j == 0)
            {
                max = j;
                m = m / j;
            }
        }

        if(m > 2) {
            max = m;
        }

        cout << max << endl;
    }
}