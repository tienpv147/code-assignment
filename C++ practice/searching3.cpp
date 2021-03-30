#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, arrsum = 0, sum = 0;
        cin >> n;
        long long int arr[n - 1];
        for (int i = 0; i < n - 1; i++)
        {
            cin >> arr[i];
            arrsum += arr[i];
        }
        for (long long int i = arr[0]; i <= arr[n - 2]; i++)
        {
            sum += i;
        }
        long long int result = sum - arrsum;
        cout << result << endl;
    }
}