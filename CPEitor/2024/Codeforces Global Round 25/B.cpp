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
int n, m;
int in[100005], me;
int ans;
void solve()
{
    ans = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
    {
        cin >> in[i];
    }
    me = in[m];
    int ptr = 1;
    while (in[ptr] <= me)
        ptr++;
    if (ptr > m)
    {
        if (m > 1)
            cout << ptr - m << "\n";
        else
            cout << ptr - m - 1 << "\n";
        return;
    }
    else
    {
        if (ptr > 1)
            cout << m - ptr << "\n";
        else
            cout << m - ptr - 1 << "\n";
        return;
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