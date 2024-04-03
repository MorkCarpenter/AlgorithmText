#include <iostream>
using namespace std;
int in[200005], n;
int nums[400005], cnt;
void solve() {
  cnt = 0;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> in[i];
  }
  nums[0] = in[0], cnt++;
  for (int i = 1; i < n; ++i) {
    if (in[i - 1] < in[i] || in[i - 1] == in[i]) {
      nums[cnt] = in[i], cnt++;
    } else {
      nums[cnt] = in[i] == 1 ? 1 : in[i] - 1, cnt++;
      nums[cnt] = in[i], cnt++;
    }
  }
  cout << cnt << "\n";
  for (int i = 0; i < cnt; ++i) {
    cout << nums[i] << " ";
  }
  cout << "\n";
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  while (t--) solve();
}