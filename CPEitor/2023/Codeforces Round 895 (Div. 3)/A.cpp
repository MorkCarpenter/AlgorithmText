#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

void solve() {
  int a, b, c;
  cin >> a >> b >> c;
  c *= 2;
  cout << (abs(a - b) + c - 1) / c << "\n";
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  while (t--) solve();
}