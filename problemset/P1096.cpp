#include <algorithm>
#include <cmath>
#include <cstring>
#include <deque>
#include <iostream>
#include <set>
#include <vector>
int in[105];
using namespace std;
deque<int> que;
int dp1[105], dp2[105];
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0), cout.tie(0);
  int n;
  cin >> n;
  for (int i = 1; i <= n; ++i)
  {
    cin >> in[i];
    dp1[i] = 1;
    dp2[i] = 1;
  }
  for (int i = 2; i <= n; i++)
  {
    for (int j = 1; j < i; j++)
    {
      if (in[i] > in[j] && dp2[i] < dp2[j] + 1)
      {
        dp2[i] = dp2[j] + 1;
      }
    }
  }
  for (int i = n - 1; i >= 1; i--)
  {
    for (int j = i + 1; j <= n; j++)
    {
      if (in[i] > in[j] && dp1[i] < dp1[j] + 1)
      {
        dp1[i] = dp1[j] + 1;
      }
    }
  }
  int ans = 0;
  for (int i = 1; i <= n; i++)
  {
    if (ans < (dp1[i] + dp2[i]))
    {
      ans = (dp1[i] + dp2[i]);
    }
  }
  cout << n - ans + 1;
  return 0;
}