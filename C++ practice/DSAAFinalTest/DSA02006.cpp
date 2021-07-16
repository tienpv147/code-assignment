#include <bits/stdc++.h>

using namespace std;

int n, k;
int arr[100], bin[100];
vector<vector<int>> vec;

void backTracking(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        bin[i] = j;
        if (i == n)
        {
            int sum = 0;
            for (int l = 1; l <= n; l++)
            {
                if (bin[l])
                {
                    sum += arr[l - 1];
                }
            }
            if (sum == k)
            {
                vector<int> res;
                for (int m = 0; m < n; m++) {
                    if (bin[m + 1]) {
                        res.push_back(arr[m]);
                    }
                }
                vec.push_back(res);
            }
        }
        else
            backTracking(i + 1);
    }
}

void solve()
{
    cin >> n >> k;
    memset(arr, 0, sizeof(arr));
    memset(bin, 0, sizeof(bin));
    vec.clear();
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    backTracking(1);
    if (!vec.size()) {
        cout << -1;
    } else {
        sort(vec.begin(), vec.end());
        for (int i = 0; i < vec.size(); i++) {
            cout << "[";
            for (int j = 0; j < vec[i].size() - 1; j++) {
                cout << vec[i][j] << " ";
            }
            cout << vec[i][vec[i].size() - 1] << "] ";
        }
    }
    cout << endl;
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