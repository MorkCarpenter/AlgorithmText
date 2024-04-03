#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
#include <set>
#include <vector>
#define MOD 100003
using namespace std;
long long dp[100005];
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0), cout.tie(0);
  int a, b;
  cin >> a >> b;
  dp[0] = 1;
  for (int i = 0; i <= a; ++i) {
    for (int j = 1; j <= b && j + i <= a; ++j) {
      dp[i + j] += dp[i];
      dp[i + j] %= MOD;
    }
  }
  cout << dp[a];
}