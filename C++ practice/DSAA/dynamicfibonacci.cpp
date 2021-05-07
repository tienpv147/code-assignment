#include <bits/stdc++.h>

using namespace std;

long long modulo = 1e9 + 7;

long long fibonacci(long long i, long long arr[]) {
    if (i == 0 || i == 1) {
        arr[i] = i;
    }
    else if (arr[i] == -1) {
        arr[i] = fibonacci(i - 1, arr) + fibonacci(i - 2, arr);
    }
    return arr[i] % modulo;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long arr[n];
        memset(arr, -1, sizeof(arr));
        cout << fibonacci(n - 1, arr) << endl;
    }
}