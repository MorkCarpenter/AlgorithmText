#include <algorithm>
#include <iostream>
#include <map>
using namespace std;
int nums[10];
void solve() {
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i) cin >> nums[i];
  int ans = 0;
  for (int i = 0; i < n; ++i) {
    int tmp = 1;
    for (int j = 0; j < n; ++j) {
      if (j == i) {
        tmp *= nums[j] + 1;
      } else {
        tmp *= nums[j];
      }
    }
    ans = max(ans, tmp);
  }
  cout << ans << "\n";
}
int main() {
  ios::sync_with_stdio(false);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}