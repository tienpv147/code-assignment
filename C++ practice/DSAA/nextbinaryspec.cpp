#include <bits/stdc++.h>

using namespace std;

int n, arr[100];
string firstSpec;

void generate()
{
    int i = n;
    while (i > 0 && arr[i] == 1)
        i--;
    if (i == 0)
    {
        return;
    }
    for (int j = i; j <= n; j++)
    {
        arr[j] = 1 - arr[j];
    }
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        getline(cin, firstSpec);
        n = firstSpec.length();
        for (int i = 1; i <= n; i++)
        {
            arr[i] = firstSpec[i - 1] - '0';
        }

        if (firstSpec.find("0") != string::npos)
        {
            generate();
            for (int i = 1; i <= n; i++)
            {
                cout << arr[i];
            }
        }
        else
        {
            for (int i = 1; i <= n + 1; i++)
            {
                cout << "0";
            }
        }
        cout << endl;
    }
}