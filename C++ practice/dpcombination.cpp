#include <iostream>
#include <string.h>

#define MAX 1000

using namespace std;

long modulo = 1e9 + 7;
long combination[MAX][MAX];

void resolve() {

}

long combinationRecursive(int n, int k)
{
    if (k == 0 || k == n)
    {
        combination[n][k] = 1;
    }
    else if (k == 1)
    {
        combination[n][k] = n;
    }
    else if (combination[n - 1][k] && combination[n - 1][k - 1])
    {
        combination[n][k] = combination[n - 1][k] + combination[n - 1][k - 1];
    }
    else
    {
        combination[n][k] = combinationRecursive(n - 1, k) + combinationRecursive(n - 1, k - 1);
    }
    return combination[n][k] % modulo;
}

int main()
{
    int times;
    cin >> times;
    while (times--)
    {
        int n, k;
        cin >> n >> k;
        memset(combination, 0, sizeof(combination));
        cout << combinationRecursive(n, k) << endl;
    }
}