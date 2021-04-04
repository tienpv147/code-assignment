#include <bits/stdc++.h>

using namespace std;

int bin[100];

void intToBinary(int n)
{
    int i = 0;
    do
    {
        bin[i++] = n % 2;
    } while ((n /= 2) > 0);
}

int main() {
    for (int i = 0; i < 16; i++) {
        for (int j = 0; j < 4; j++) {
            bin[j] = 0;
        }
        intToBinary(i);
        for (int k = 0; k < 4; k++) {
            cout << bin[k];
        }
        cout << " ";
    }
}
