#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    stack<int> st;
    st.push(1);
    int arr[n + 1], li[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        li[i] = 1;
    }
    for (int i = 2; i <= n; i++)
    {
        while (st.size() >= 1 && arr[i] >= arr[st.top()])
        {
            li[i] += li[st.top()];
            st.pop();
        }
        st.push(i);
    }
    for (int i = 1; i <= n; i++)
    {
        cout << li[i] << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}