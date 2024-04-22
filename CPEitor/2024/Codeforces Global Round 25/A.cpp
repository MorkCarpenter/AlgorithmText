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
typedef long long ll;
using namespace std;
int n;
char in;
int sum;
bool flag;
void solve()
{
    sum = 0;
    cin >> n;
    int l = n;
    int r = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> in;
        if (in == '1')
        {
            sum++;
            l = min(l, i);
            r = max(r, i);
        }
    }
    if (sum == 2 && r - l == 1)
    {
        cout << "NO\n";
        return;
    }
    if (sum % 2 == 1)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
        solve();
}