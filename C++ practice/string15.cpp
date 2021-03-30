#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        string s;
        vector<string> vec;
        getline(cin, s);
        // string nonDupS = s;
        // unordered_set<char> log;
        // nonDupS.erase(remove_if(nonDupS.begin(), nonDupS.end(),[&] (char const c) { return !(log.insert(c).second); }), nonDupS.end());
        for (int i = 0; i < s.length(); i++) {
            for (int j = i + 1; j < s.length(); j++) {
                string subS = s.substr(i, j + 1);
                if (s[i] == s[j]) {
                    vec.push_back(subS);
                }
            }
        }
        cout << s.length() + vec.size() << endl;
    }
}