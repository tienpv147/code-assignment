#include <bits/stdc++.h>

using namespace std;

int main()
{
    int times;
    cin >> times;
    cin.ignore();
    while (times--)
    {
        int size;
        cin >> size;
        vector<int> v;
        int ele;
        for (int i = 0; i < size; i++)
        {
            cin >> ele;
            v.push_back(ele);
        }
        vector<int> secondVec = v;
        sort(v.begin(), v.end());
        bool flag = true;
        for (int i = 0; i < size; i++)
        {
            if (v[i] != secondVec[size - 1 - i] && v[i] != secondVec[i])
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}