#include <bits/stdc++.h>

using namespace std;

int n, arr[100], count = 1;
bool lastResult = false;

void recursiveGen()
{
}

void generate()
{
    int j = n - 1;
    while ((j > 0) && (arr[j] < arr[j + 1]))
        j--;
    if (j == 0)
    {
        lastResult = true;
        return;
    }
    else
    {
        int k = n;
        while (arr[k] > arr[j])
            k--;
        int temporary = arr[j];
        arr[j] = arr[k];
        arr[k] = temporary;
        int left = j + 1, right = n;
        while (left <= right)
        {
            temporary = arr[left];
            arr[left] = arr[right];
            arr[right] = temporary;
            left++;
            right--;
        }
    }
    return;
}
void printResult()
{
    for (int j = 1; j <= n; j++)
        cout << arr[j];
    cout << " ";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        lastResult = false;
        cin >> n;
        for (int j = 1; j <= n; j++)
            arr[j] = n - j + 1;
        while (!lastResult)
        {
            printResult();
            generate();
        }
        cout << endl;
    }
}