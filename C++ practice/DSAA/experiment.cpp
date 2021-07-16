#include <bits/stdc++.h>

using namespace std;

bool cmp(int ele1, int ele2) {
    return ele1 < ele2 && ele2 < 0;
}

int main()
{
    string str = bitset<8>(1).to_string();
    vector<int> vec = {5, 3, 4, 1};
    int ele = 3;
    int max = *max_element(vec.begin() + 3, vec.end(), [&ele](int a, int b) {
        return a < b;
    });
    cout << max << endl;
}