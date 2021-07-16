#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    vector<int> checkpool;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int pairs = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (k - arr[i] == arr[i])
    //     {
    //         if (count(arr, arr + n, arr[i]) > 1)
    //         {
    //             pairs++;
    //         }
    //     }
    //     else
    //     {
    //         if (count(arr, arr + n, k - arr[i]))
    //         {
    //             if (!count(checkpool.begin(), checkpool.end(), k - arr[i]))
    //             {
    //                 pairs++;    
    //                 checkpool.push_back(arr[i]);
    //             }
    //         }
    //     }
    // }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (k - arr[i] == arr[j]) {
                pairs++;
            }
        }
    }
    cout << pairs << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}