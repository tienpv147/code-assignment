#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int gcd(int a, int b) {
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        string a;
        int x, y;
        cin >> a >> x >> y;
        string b = a;
        a = "";
        int dups = (x < y) ? gcd(x, y) : gcd(y, x);
        while(dups--) {
            a += b;
        }
        cout << a << endl;        
    }
}