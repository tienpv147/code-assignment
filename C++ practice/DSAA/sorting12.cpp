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
        long long int n1, n2;
        cin >> n1 >> n2;
        long long int arr1[n1], arr2[n2];
        for (int i = 0; i < n1; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < n2; i++)
        {
            cin >> arr2[i];
        }
        sort(arr1, arr1 + n1);
        sort(arr2, arr2 + n2);
        cout << arr1[n1 - 1] * arr2[0] << endl;
    }
}