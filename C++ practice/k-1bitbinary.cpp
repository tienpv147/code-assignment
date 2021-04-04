#include <bits/stdc++.h>

using namespace std;

int n, k;
int arr[100];
vector<vector<int>> binaryResult;

void init() {
    
}

void pushBack()
{
    vector<int> binaryArr;
    for (size_t i = 0; i < n; i++)
    {
        binaryArr.push_back(arr[i]);
    }
    binaryResult.push_back(binaryArr);
}

void back_tracking(int i)
{
    vector<int> binaryArr;
    for (int j = 0; j <= 1; j++)
    {
        arr[i] = j;
        if (i == n - 1)
        {
            pushBack();
        }
        else
            back_tracking(i + 1);
    }
    return;
}

void result()
{
    for (int i = 0; i < binaryResult.size(); i++)
    {
        int count1Bits = 0;
        for (int j = 0; j < binaryResult[i].size(); j++)
        {
            if (binaryResult[i][j])
                count1Bits++;
        }
        if (count1Bits == k)
        {
            for (int j = 0; j < binaryResult[i].size(); j++)
            {
                cout << binaryResult[i][j];
            }
            cout << endl;
        }
    }
}

int main()
{
    int times;
    cin >> times;
    while (times--)
    {
        cin >> n >> k;
        binaryResult.clear();
        back_tracking(0);
        result();
    }
}