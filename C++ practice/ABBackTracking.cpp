#include <bits/stdc++.h>

using namespace std;

int n = 0, arr[100];

void print()
{
  for (int j = 1; j <= n; j++)
  {
    if (arr[j] == 0)
      cout << "A";
    if (arr[j] == 1)
      cout << "B";
  }
  cout << " ";
}

void backTracking(int k)
{
  for (int j = 0; j <= 1; j++)
  {
    arr[k] = j;
    if (k == n)
    {
      print();
    }
    else
    {
      backTracking(k + 1);
    }
  }
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
      arr[i] = 0;
    }
    backTracking(1);
    cout << endl;
  }
}
