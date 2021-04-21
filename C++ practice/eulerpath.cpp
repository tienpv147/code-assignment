#include <bits/stdc++.h>

using namespace std;

int n, m, arr[100][100];

void eulerPath(int u) {
    stack<int> st;
    vector<int> CE;
    st.push(u);
    while (!st.empty()) {
        int s = st.top();
        bool isEmpty = true;
        int first;
        for (int i = 1; i <= n; i++) {
            if (arr[s][i]) {
                isEmpty = false;
                first = i;
                break;
            }
        }
        if (!isEmpty) {
            st.push(first);
            arr[first][s] = arr[s][first] = 0;
        } else {
            CE.push_back(s);
            st.pop();
        }
    }
    reverse(CE.begin(), CE.end());
    for (int i = 0; i < CE.size(); i++) {
        cout << CE[i] << " ";
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> arr[i][j];
        }
    }
    eulerPath(m);
}