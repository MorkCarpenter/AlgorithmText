#include <iostream>
using namespace std;
long long ans;
int nums[500];
int main() {
  ios::sync_with_stdio(false);
  string in;
  cin >> in;
  for (int i = 0; i < in.size(); ++i) {
    long long tmp = 1;
    for (int j = 1; j <= i && i + j < in.size(); ++j) {
      if (in[i - j] == in[i + j]) {
        tmp += 2;
      } else {
        break;
      }
    }
    ans = ans > tmp ? ans : tmp;
  }
  for (int i = 0; i < in.size(); ++i) {
    long long tmp = 0;
    for (int j = 0; j <= i && i + j + 1 < in.size(); ++j) {
      if (in[i - j] == in[i + j + 1]) {
        tmp += 2;
      } else {
        break;
      }
    }
    ans = ans > tmp ? ans : tmp;
  }
  cout << ans;
}