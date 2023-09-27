#include <algorithm>
#include <iostream>
using namespace std;
int n, aim;
int nums[105];
int sum, mn, mi;
int main() {
  ios::sync_with_stdio(false);
  cin >> n >> aim;
  int in;
  mi = 100, mn = 0;
  for (int i = 1; i < n; ++i) {
    cin >> in;
    sum += in;
    mn = max(in, mn);
    mi = min(in, mi);
  }
  sum -= mn + mi;
  for (int ans = 0; ans <= 100; ++ans) {
    if (ans <= mi && sum + mi >= aim) {
      cout << ans;
      return 0;
    }
    if (ans > mi && ans < mn && ans + sum >= aim) {
      cout << ans;
      return 0;
    }
    if (ans >= mn) {
      if (sum + mn >= aim) {
        cout << ans;
        return 0;
      } else {
        break;
      }
    }
  }
  cout << -1;
}