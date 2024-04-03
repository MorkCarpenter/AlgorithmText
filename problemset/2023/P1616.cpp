#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
#include <set>
#include <vector>
using namespace std;
long long dp[10000005];
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0), cout.tie(0);
  int m, t, a, b;
  cin >> t >> m;
  while (m--) {
    cin >> a >> b;
    for (int i = 0; i + a <= t; ++i) {
      dp[i + a] = max(dp[i + a], dp[i] + b);
    }
  }
  cout << dp[t];
  return 0;
}