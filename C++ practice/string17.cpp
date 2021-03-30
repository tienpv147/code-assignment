#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        string s, nonDupS;
        cin >> s;
        for (int i = 0; i < s.length(); i++) {
            if (count(s.begin(), s.end(), s[i]) == 1) {
                nonDupS.push_back(s[i]);
            }
        }
        cout << nonDupS << endl;
    }
}