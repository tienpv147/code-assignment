#include <bits/stdc++.h>

using namespace std;

int n, k, arr[100];
    
void print()
{
  for (int j = 1; j <= k; j++)
  {
    cout << arr[j];
  }
  cout << " ";
}

void backTracking(int i)
{
  for (int j = arr[i - 1] + 1; j <= n - k + i; j++)
  {
    arr[i] = j;
    if (i == k)
      print();
    else
      backTracking(i + 1);
  }
}

int main()
{
  int t;
  cin >> t;
  
  while (t--)
  {
    cin >> n >> k;
    arr[0] = 0;
    backTracking(1);
    cout << endl;
  }
}
