#include <bits/stdc++.h>

using namespace std;

int check(int bought, int dayRemains, int foodUnit)
{
    return dayRemains * foodUnit - bought * (dayRemains - int(dayRemains / 7));
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int bought, dayRemains, foodUnit;
        cin >> bought >> dayRemains >> foodUnit;
        int sum = 0;
        bool flag = true;

        if (check(bought, dayRemains, foodUnit) > 0)
        {
            cout << -1 << endl;
            flag = false;
        }
        if (flag)
        {
            for (int j = 1; j <= dayRemains - int(dayRemains / 7); j++)
            {
                if (j * bought >= dayRemains * foodUnit)
                {
                    cout << j << endl;
                    break;
                }
            }
        }
    }
}