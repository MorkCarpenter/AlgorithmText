#include <algorithm>
#include <cstring>
#include <iostream>
#include <set>
#include <vector>
using namespace std;
long long nums[200005];
long long tak[200005];
void solve() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; ++i) cin >> nums[i];
  if (n == 1) {
    int q;
    cin >> q;
    while (q--) {
      int pos, var;
      cin >> pos >> var;
      cout << var << ' ';
    }
    cout << "\n";
    return;
  }
  multiset<int> list;
  for (int i = 1; i <= n; ++i) {
    list.insert(nums[i]);
  }
  multiset<int> diff;
  for (auto i = ++list.begin(); i != list.end(); ++i) {
    auto last = i;
    --last;
    diff.insert(*i - *last);
  }
  int q;
  cin >> q;
  while (q--) {
    int pos, var;
    cin >> pos >> var;
    auto now = list.find(nums[pos]);
    auto last = now, next = now;
    --last, next++;
    if (now == list.begin()) {
      diff.erase(diff.find(*next - *now));
    } else if (now == --list.end()) {
      diff.erase(diff.find(*now - *last));
    } else {
      diff.erase(diff.find(*now - *last));
      diff.erase(diff.find(*next - *now));
      diff.insert(*next - *last);
    }
    list.erase(now);
    list.insert(var);
    nums[pos] = var;
    now = list.find(var);
    last = now, next = now;
    --last, ++next;
    if (now == list.begin()) {
      diff.insert(*next - *now);
    } else if (now == --list.end()) {
      diff.insert(*now - *last);
    } else {
      diff.insert(*next - *now);
      diff.insert(*now - *last);
      diff.erase(diff.find(*next - *last));
    }
    cout << *--list.end() + *--diff.end() << ' ';
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