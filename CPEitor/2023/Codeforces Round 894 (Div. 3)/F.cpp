#include <algorithm>
#include <bitset>
#include <cstring>
#include <iostream>
#include <set>
#include <vector>
using namespace std;
long long w, f, sum;
void solve() {
  int n;
  sum = 0;
  long long ans = 2e9;
  cin >> w >> f >> n;
  vector<int> nums(n + 5);
  for (int i = 0; i < n; ++i) {
    cin >> nums[i];
    sum += nums[i];
  }
  vector<bool> dp(sum + 5);
  dp[0] = true;
  for (int i = 0; i < n; ++i) {
    for (int j = sum; j - nums[i] >= 0; --j) {
      dp[j] = dp[j] || dp[j - nums[i]];
    }
  }
  for (int i = 0; i < sum + 1; ++i) {
    if (dp[i]) {
      ans = min(ans, max((i + w - 1) / w, (sum - i + f - 1) / f));
    }
  }
  cout << ans << "\n";
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  while (t--) solve();
}