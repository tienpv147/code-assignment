#include <bits/stdc++.h>

using namespace std;

int main()
{
    int times;
    cin >> times;
    while (times--)
    {
        int n, array[1000], sumup = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }
        sumup = accumulate(array, array + n, sumup);
        cout << n - sumup << endl;
    }
}