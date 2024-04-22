#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstring>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;
typedef long long ll;
int L, n, k;
int in[100005], last;

bool check(int x) {
  int tmp = 0;
  for (int i = 1; i < n; ++i) {
    int dis = in[i] - in[i - 1];
    int a1 = dis / x, a2 = dis % x;
    if (a1) {
      tmp += (a2 ? a1 : a1 - 1);
    }
  }
  if (tmp > k)
    return false;
  else
    return true;
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr), cout.tie(nullptr);
  cin >> L >> n >> k;
  for (int i = 0; i < n; ++i) {
    cin >> in[i];
  }
  sort(in, in + n);
  int l = 1, r = L;
  while (l < r) {
    int mid = (l + r) >> 1;
    if (check(mid)) {
      r = mid;
    } else {
      l = mid + 1;
    }
  }
  cout << l;
  return 0;
}