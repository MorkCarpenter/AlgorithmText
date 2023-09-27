#include <iostream>
#include <vector>
#define mod 10000000009
using namespace std;
long long sum[200005];
int n, m;
long long ans = 0;
long long listsum[200005];
void df(int cen, int begin) {
  if (cen > m || begin >= n) {
    return;
  }
  int l = begin + 1;
  int r = n;
  while (l < r) {
    int mid = (l + r) >> 1;
    if ((sum[mid] - listsum[cen] - 1) * m - cen > sum[n] - listsum[cen]) {
      r = mid;
    } else {
      l = mid + 1;
    }
  }
  ans = ans > sum[l] - listsum[cen] ? ans : sum[l] - listsum[cen];
  listsum[cen + 1] = sum[l];
  df(cen + 1, l);
}
int main() {
  scanf("%d %d", &n, &m);
  for (int i = 1; i <= n; ++i) {
    scanf("%lld", &sum[i]);
    sum[i] += (sum[i - 1] + 1);
  }
  df(0, 1);
  cout << ans - 1;
}