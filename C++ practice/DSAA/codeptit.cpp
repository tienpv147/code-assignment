#include <bits/stdc++.h>

using namespace std;

#define CONSTRAINT 51

int main()
{
    long long numberOfSteps[CONSTRAINT] = {};
    // fixed
    numberOfSteps[1] = 1, numberOfSteps[2] = 2, numberOfSteps[3] = 4;
    // dp
    for (int i = 4; i < CONSTRAINT; i++)
    {
        numberOfSteps[i] = numberOfSteps[i - 1] + numberOfSteps[i - 2] + numberOfSteps[i - 3];
    }
    int times;
    cin >> times;
    while (times--)
    {
        int n;
        cin >> n;
        cout << numberOfSteps[n];
        cout << endl;
    }
}