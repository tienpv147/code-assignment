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
        int n;
        cin >> n;
        int arr[n];
        int result = 10000;
        int temp = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                temp = arr[i] + arr[j];
                if (abs(temp) < abs(result)) {
                    result = temp;
                }
            }
        }

        cout << result << endl;
    }
}