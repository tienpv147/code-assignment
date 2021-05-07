#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long factorial(long long x, long long y, long long p) {
    int result = 1;
    for(int i = 0; i < y; i++) {
        result = (result * x) % p;
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long x, y, p;
        cin >> x >> y >> p;
        cout << factorial(x, y, p) << endl;
    }
}