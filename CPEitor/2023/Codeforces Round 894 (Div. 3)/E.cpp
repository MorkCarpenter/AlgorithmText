#include <algorithm>
#include <cstring>
#include <iostream>
#include <set>
using namespace std;
long long in[200005], n, m, d, sum, ans;
void solve() {
  sum = 0, ans = 0;
  multiset<int> s;
  cin >> n >> m >> d;
  for (int i = 1; i <= n; ++i) {
    cin >> in[i];
    if (in[i] > 0) {
      long long tmp = sum + in[i] - d * i;
      ans = max(ans, tmp);
      s.insert(in[i]);
      sum += in[i];
      if (s.size() >= m) {
        sum -= *s.begin();
        s.erase(s.begin());
      }
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