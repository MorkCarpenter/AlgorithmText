#include <iostream>
#include <map>

using namespace std;
map<string, bool> m;
int main() {
  ios::sync_with_stdio(false);
  m.insert({"abc", 0});
  m.insert({"bac", 0});
  m.insert({"cba", 0});
  m.insert({"acb", 0});
  int t;
  cin >> t;
  while (t--) {
    string in;
    cin >> in;
    if (m.find(in) == m.end()) {
      cout << "NO\n";
    } else {
      cout << "YES\n";
    }
  }
  return 0;
}
