#include <iostream>
using namespace std;
int n, X[100];
bool cauhinhcuoi = false;
void sinh()
{
    int i = n;
    while ((i > 0) && (X[i] == 1))
        i--;
    if (i == 0)
    {
        cauhinhcuoi = true;
        return;
    }
    else
    {
        for (int j = i; j <= n; j++)
            X[j] = 1 - X[j];
    }
    return;
}
void print()
{
    for (int j = 1; j <= n; j++)
    {
        cout << X[j];
    }
    cout << " ";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int j = 1; j <= n; j++)
            X[j] = 0;
        while (!cauhinhcuoi)
        {
            print();
            sinh();
        }
        cout << endl;
        cauhinhcuoi = false;
    }
}