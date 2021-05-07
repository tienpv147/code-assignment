#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <regex>

using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    vector<string> vec;
    while(t--) {
        string s;
        getline(cin, s);
        size_t pos = 0;
        string delim = " ";
        while((pos = s.find(delim)) != string::npos) {
            size_t start = pos + 1;
            vec.push_back(s.substr(0, pos));
            s.erase(0, start);
        }
        vec.push_back(s);
        for (int i = vec.size() - 1; i > 0; i--) {
            cout << vec[i] << " ";       
        }
        cout << vec[0];    
        cout << endl;
        vec.erase(vec.begin(), vec.end());
    }
}