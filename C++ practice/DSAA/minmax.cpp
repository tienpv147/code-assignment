#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int m, s;
    cin >> m >> s;
    if (s > 9 * m || !s)
    { //!s:nếu tổng bằng 0
        cout << -1 << " " << -1;
    }
    else
    {
        int minPos = s / 9; //tìm số chữ số 9
        string ans(m, '0');
        fill(ans.begin(), ans.begin() + minPos, '9');
        if (s % 9)
        {
            ans[minPos] += s % 9;
        }
        string maxAns = ans;
        if (ans[m - 1] == '0')
        { //lấy ví dụ cụ thể để dễ hiểu hơn
            ans[minPos]--;
            ans[m - 1] = '1';
        }
        reverse(ans.begin(), ans.end());
        cout << ans << " " << maxAns;
    }
    return 0;
}