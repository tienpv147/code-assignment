#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long int n, m, ele;
        cin >> n >> m;
        vector<long long int> a;
        for(int i = 0; i < n + m; i++) {
            cin >> ele;
            a.push_back(ele);
        }
        sort(a.begin(), a.end());
        for(vector<long long int>::iterator i = a.begin(); i != a.end(); i++) {
            cout << *i << " ";
        }
        cout << endl;
    }
}