#include <iostream>
#include <map>
#include <set>
using namespace std;
map<string, bool> st;
map<string, bool> tmp;
int main()
{
  ios::sync_with_stdio(false);
  int n;
  string in;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> in;
    st.insert({in, 0});
  }
  int m;
  cin >> m;
  for (int i = 0; i < m; i++)
  {
    cin >> in;
    if (st.find(in) != st.end())
    {
      if (tmp.find(in) == tmp.end())
      {
        cout << "OK\n";
        tmp.insert({in, 0});
      }
      else
      {
        cout << "REPEAT\n";
      }
    }
    else
    {
      cout << "WRONG\n";
    }
  }
}