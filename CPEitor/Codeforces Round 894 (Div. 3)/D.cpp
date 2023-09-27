#include <iostream>
using namespace std;
long long n;
void solve() {
  cin >> n;
  long long r = 2e9, l = 1;
  while (l < r) {
    long long mid = (l + r + 1) >> 1;
    if ((mid - 1) * mid / 2 > n) {
      r = mid - 1;
    } else {
      l = mid;
    }
  }
  long long ans = l + (n - (l - 1) * l / 2);
  cout << ans << "\n";
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  while (t--) solve();
}