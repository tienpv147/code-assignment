#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    string val;
    vector<string> vec;
    for (int i = 0; i < n; i++)
    {
        getline(cin, val);
        
        vec.push_back(val);
    }
    
    sort(vec.begin(), vec.end());
    vec.erase(unique(vec.begin(), vec.end()), vec.end());
    for (int i = 0; i < n; i++)
    {
        cout << vec[i] << endl;
    }
    cout << vec.size() << endl;
}