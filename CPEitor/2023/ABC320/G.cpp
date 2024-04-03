#include <iostream>
using namespace std;
long long in;
bool ok[1000000000];
int primes[75000000], cnt;
void get_primes(int n) {
  for (int i = 2; i <= n; ++i) {
    if (!ok[i]) primes[cnt++] = i;
    for (int j = 0; primes[j] <= n / i; ++j) {
      ok[primes[j] * i] = true;
      if (i % primes[j] == 0) break;
    }
  }
  return;
}
void solve() {
  cin >> in;
  bool fg = false;
  int ans = 0;
  for (int i = 0; primes[i] <= in && i < cnt; ++i) {
    while (in % primes[i] == 0) {
      in /= primes[i];
      fg = true;
    }
    if (fg) {
      ans++;
      fg = 0;
    }
  }
  if (ans >= 2 && in == 1)
    cout << "Yes\n";
  else
    cout << "No\n";
}
int main() {
  ios::sync_with_stdio(false);
  int n;
  cin >> n;
  get_primes(500000);
  while (n--) solve();
}
