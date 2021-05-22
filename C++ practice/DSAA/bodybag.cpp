#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int quality, volume;
        cin >> quality >> volume;
        int weight[quality + 1], value[quality + 1], carryValue[quality + 1][volume + 1];
        memset(carryValue, 0, sizeof(carryValue));

        for (int i = 1; i < quality + 1; i++)
        {
            cin >> weight[i];
        }
        for (int i = 1; i < quality + 1; i++)
        {
            cin >> value[i];
        }

        for (int i = 1; i < quality + 1; i++)
        {
            for (int j = 1; j < volume + 1; j++)
            {
                if (weight[i] <= j)
                {
                    carryValue[i][j] = max(carryValue[i - 1][j], carryValue[i - 1][j - weight[i]] + value[i]);
                }
                else
                {
                    carryValue[i][j] = carryValue[i - 1][j];
                }
            }
        }

        cout << carryValue[quality][volume] << endl;
    }
}