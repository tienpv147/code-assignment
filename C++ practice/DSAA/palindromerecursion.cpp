#include <bits/stdc++.h>

using namespace std;

bool palindrome(string s, int first, int last) {
    if (first == last || first == last - 1) {
        return true;
    }
    if (s[first] == s[last])
        return palindrome(s, s[first + 1], s[last - 1]);
    return false;
}

int main() {
    string s;
    cin >> s;
    cout << palindrome(s, 0, s.length() - 1) << endl;
}