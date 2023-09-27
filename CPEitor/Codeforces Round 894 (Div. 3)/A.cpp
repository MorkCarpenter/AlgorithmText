#include <iostream>
using namespace std;
string aim = "vika";
char in[25][25];
void solve() {
  int num = 0;
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < n; ++i) cin >> in[i];
  for (int i = 0; i < m; ++i) {
    bool flag = false;
    for (int j = 0; j < n; ++j) {
      if (in[j][i] == aim[num]) {
        flag = true;
        break;
      }
    }
    if (flag) {
      num++;
      if (num == 4) break;
    }
  }
  if (num == 4)
    cout << "YES\n";
  else
    cout << "NO\n";
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  while (t--) solve();
}