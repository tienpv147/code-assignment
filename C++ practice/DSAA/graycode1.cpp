#include <bits/stdc++.h>
using namespace std;

int bin[100], gray[100];

void intToBinary(int n)
{
    int i = 0;
    do
    {
        bin[i++] = n % 2;
    } while ((n /= 2) > 0);
}

void init() {
    for (int i = 0; i < 100; i++) {
        bin[i] = 0;
        gray[i] = 0;
    }
}

void binaryToGray(int n)
{
    gray[n - 1] = bin[n - 1];
    for (int i = n - 1; i >= 0; --i)
    {
        if (bin[i] == 0 && bin[i + 1] == 0)
            gray[i] = 0;
        else if (bin[i] == 1 && bin[i + 1] == 1)
            gray[i] = 0;
        else if (bin[i] == 0 && bin[i + 1] == 1)
            gray[i] = 1;
        else if (bin[i] == 1 && bin[i + 1] == 0)
            gray[i] = 1;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < pow(2, n); i++) {
            init();
            intToBinary(i);
            binaryToGray(n);
            for (int j = n - 1; j >= 0; j--) {
                cout << gray[j];
            }
            cout << " ";
        }
        cout << endl;
    }
}