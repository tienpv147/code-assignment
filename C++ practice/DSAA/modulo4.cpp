#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int moduloRecursion(int n, long long k) {
    if(n == 0) {
        return 0;
    } else {
        return n % k + moduloRecursion(n - 1, k);
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        long long int k;
        cin >> n >> k;
        cout << (moduloRecursion(n, k) == k) ? 1 : 0; 
        cout << endl;   
    }
}