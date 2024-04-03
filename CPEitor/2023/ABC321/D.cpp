#include <algorithm>
#include <iostream>
using namespace std;

long long n, m, p, ans;
long long A[200005], B[200005];
int main() {
  ios::sync_with_stdio(false);
  cin >> n >> m >> p;
  int ni, mi;
  for (int i = 0; i < n; ++i) {
    cin >> A[i];
  }
  for (int j = 0; j < m; ++j) cin >> B[j];
  sort(A, A + n);
  sort(B, B + m);
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      if (A[i] + B[j] < p) {
        ans += A[i] + B[j];
      } else {
        ans += p * (m - j);
        break;
      }
    }
  }
  cout << ans << "\n";
}