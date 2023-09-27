#include <cstring>
#include <iostream>
using namespace std;
int in[200005], n;
int ans[200005], cnt;
void solve() {
  cin >> n;
  memset(ans, 0, sizeof(ans));
  cnt = 0;
  for (int i = 1; i <= n; ++i) {
    cin >> in[i];
  }
  if (in[1] != n) {
    cout << "NO\n";
    return;
  }
  for (int i = n; i >= 1; --i) {
    while (cnt < in[i]) {
      ans[cnt] = i, cnt++;
    }
  }
  for (int i = 1; i <= n; ++i) {
    if (in[i] != ans[i - 1]) {
      cout << "NO\n";
      return;
    }
  }
  cout << "YES\n";
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  while (t--) solve();
}