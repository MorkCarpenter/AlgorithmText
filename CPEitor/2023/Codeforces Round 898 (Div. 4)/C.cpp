#include <algorithm>
#include <iostream>
using namespace std;
char map[20][20];
void solve() {
  int ans = 0;
  for (int i = 1; i <= 10; ++i) {
    for (int j = 1; j <= 10; ++j) {
      cin >> map[i][j];
    }
  }
  for (int i = 1; i <= 5; ++i) {
    for (int j = i; j <= 10 - i + 1; ++j) {
      if (map[i][j] == 'X') ans += i;
    }
    for (int j = 1 + i; j <= 10 - i + 1; ++j) {
      if (map[j][10 - i + 1] == 'X') ans += i;
    }
    for (int j = i; j <= 10 - i; ++j) {
      if (map[10 - i + 1][j] == 'X') ans += i;
    }
    for (int j = i + 1; j <= 10 - i; ++j) {
      if (map[j][i] == 'X') ans += i;
    }
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