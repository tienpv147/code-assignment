#include <iostream>
#include <set>

using namespace std;

int n, k, soldierArr[100], soldierSet[100];
bool isLastSpec = false;
void generate()
{
    int i = k;
    while ((i > 0) && (soldierArr[i] == n - k + i))
        i--;
    if (i == 0)
    {
        isLastSpec = true;
        return;
    }
    else
    {
        soldierArr[i] = soldierArr[i] + 1;
        for (int j = i + 1; j <= k; j++)
        {
            soldierArr[j] = soldierArr[i] + (j - i);
        }
    }
    return;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        isLastSpec = false;
        set<int> soldierSet;
        cin >> n >> k;
        for (int j = 1; j <= k; j++)
        {
            cin >> soldierArr[j];
            soldierSet.insert(soldierArr[j]);
        }
        generate();
        for (int i = 1; i <= k; i++)
        {
            soldierSet.insert(soldierArr[i]);
        }
        if (soldierSet.size() - k == 0)
        {
            cout << k;
        }
        else
        {
            cout << soldierSet.size() - k;
        }
        cout << endl;
    }
}