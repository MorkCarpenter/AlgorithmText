#include <algorithm>
#include <bitset>
#include <cmath>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;
map<int, int> m;
int n, in;
int main()
{
  ios::sync_with_stdio(false);
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> in;
    m[in]++;
  }
  for (auto it : m)
  {
    cout << it.first << " " << it.second << "\n";
  }
  return 0;
}