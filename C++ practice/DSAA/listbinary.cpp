#include <iostream>
using namespace std;
int n, X[100], count = 1, c = 0;
void print()
{
    cout << "\n"
         << count++ << ": ";
    for (int j = 1; j <= n; j++)
        cout << X[j] << " ";
}
void BackTrack(int i)
{ //Liet ke cac xau nhi phan bat tu X[i]
    //Xet cac kha nang cua X[i]
    for (int j = 0; j <= 1; j++)
    {
        X[i] = j;   //khong co rang buoc, j duoc chap thuan
        if (i == n) //X[i] la thanh phan cuoi cung, in cau hinh
            print();
        else
        {
            //X[i] chua phai la thanh phan cuoi, sinh cac xau tu X[i+1]
            c++;
            BackTrack(i + 1);
        }
    }
    return;
}
int main()
{
    n = 3;
    BackTrack(1);
    cout << endl;
    cout << c << endl; //Liet ke cac xau nhi phan, bat dau tu X[1]
    return 0;
}