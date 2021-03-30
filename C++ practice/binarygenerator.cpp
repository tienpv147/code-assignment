#include <bits/stdc++.h>

using namespace std;

int n, X[100] = {0};
bool lastResult = false;

void generate()
{
    int i = n;
    while ((i > 0) && (X[i]) == 1)
        i--;
    if (i == 0)
    {
        lastResult = true;
        return;
    }
    for (int j = i; j <= n; j++)
    {
        X[j] = 1 - X[j];
    }
}

void print()
{
    for (int j = 1; j <= n; j++)
        cout << X[j] << " ";
    cout << endl;
}

int main()
{
    cin >> n;
    // for (int j = 1; j <= n; j++) {
    //     X[j] = 0;
    // }

    while (!lastResult)
    {
        print();
        generate();
    }
}