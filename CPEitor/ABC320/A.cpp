#include <cmath>
#include <iostream>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  int a, b;
  cin >> a >> b;
  cout << (long long)(pow(a, b) + pow(b, a));
  return 0;
}