#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, sum = 0;
        cin >> n;
        while (n >= 10) {
            while (n != 0) {
                int last = n % 10;
                sum += last;
                n /= 10;
            }
            n = sum;
            sum = 0;
        }
        cout << n << endl;
    }
}