#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string input;
    cin >> n;
    cin.ignore();
    vector<int> adjacent[n + 1];

    for (int i = 1; i <= n; i++)
    {
        getline(cin, input);
        input += " ";
        int num = 0;
        int j = 0;
        while (j < input.size())
        {
            if (input[j] >= '0' && input[j] <= '9')
            {
                num = num * 10 + (int)(input[j] - '0');
            }
            else
            {
                adjacent[i].push_back(num);
                num = 0;
            }
            j++;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        sort(adjacent[i].begin(), adjacent[i].end());
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < adjacent[i].size(); j++)
        {
            if (i < adjacent[i][j])
            {
                cout << i << " " << adjacent[i][j] << endl;
            }
        }
    }
}