#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

bool isPrime(int a) {
    if(a <= 1) {
        return false;
    }
    for(int i = 2; i <= sqrt(a); i++) {
        if(a % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        for(int i = 2; i <= n; i++) {
            if(isPrime(i)) {
                cout << i << " ";
            }
        }
        cout << endl;
    }
}