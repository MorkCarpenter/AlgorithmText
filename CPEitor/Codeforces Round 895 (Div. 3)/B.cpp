#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
#include <set>
#include <vector>
using namespace std;
bool ok[2005];
int n;
void solve() {
  memset(ok, 0, sizeof(ok));
  cin >> n;
  int a, b;
  for (int i = 0; i < n; ++i) {
    cin >> a >> b;
    ok[a + (b - 1) / 2] = true;
  }
  for (int i = 1; i <= 300; ++i)
    if (ok[i]) {
      cout << i << "\n";
      return;
    }
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  while (t--) solve();
}