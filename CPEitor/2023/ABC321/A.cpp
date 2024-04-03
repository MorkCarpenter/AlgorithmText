#include <iostream>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  string in;
  cin >> in;
  if (in == "1") {
    cout << "Yes\n";
    return 0;
  }
  for (int i = 1; i < in.size(); ++i) {
    if (in[i] >= in[i - 1]) {
      cout << "No\n";
      return 0;
    }
  }
  cout << "Yes";
  return 0;
}