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
        int arr[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> arr[i][j];
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i != 0 && i != n - 1 && j != 0 && j != n - 1) {
                    cout << "  ";
                } else {
                    cout << arr[i][j] << " ";
                }
            }
            cout << endl;
        }

        cout << endl;
    }
}