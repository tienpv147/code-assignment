#include <bits/stdc++.h>

using namespace std;

int solve(int arr[]) {

}

int main()
{
    int length;
    cin >> length;
    int input[length];
    int countLengthArr[10000];
    for (int i = 1; i <= length; i++)
    {
        cin >> input[i];
        countLengthArr[i] = 1;
    }

    int result = 0;
    for (int i = 1; i <= length; i++)
    {
        for (int j = 1; j < i; j++)
        {
            if (input[i] > input[j])
            {
                countLengthArr[i] = max(countLengthArr[i], countLengthArr[j] + 1);
            }
        }
        result = max(result, countLengthArr[i]);
    }
    cout << result << endl;
}