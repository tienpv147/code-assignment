#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        int arr[n];
        vector <int> vec;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];    
        }
        sort(arr, arr + sizeof(arr) / sizeof(arr[0]));
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                vec.push_back(arr[j] - arr[i]);
            }
        }
        sort(vec.begin(), vec.end());
        cout << vec.front() << endl;
    }
}