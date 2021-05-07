#include <bits/stdc++.h>

using namespace std;

int find(int arr[], int l, int r, int k) {
    int m = (l + r) / 2; 
    if (arr[m] == k) {
        return m;
    }
    else if (k < arr[m]) {
        return find(arr, l, m, k);
    }
    else if (k > arr[m]) {
        return find(arr, m + 1, r, k);
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    cout << find(arr, 0, n - 1, k) << endl;
}