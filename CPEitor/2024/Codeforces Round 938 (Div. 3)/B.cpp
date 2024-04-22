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
ll n, c, d;
map<ll, ll> mp;
ll in, mn = LONG_MAX;
void solve()
{
    mp = map<ll, ll>();
    mn = LONG_MAX;
    cin >> n >> c >> d;
    ll a = n * n;
    for (int i = 1; i <= a; ++i)
    {
        cin >> in;
        mn = min(in, mn);
        mp[in]++;
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            ll now = mn + i * c + j * d;
            if (mp[now] > 0)
            {
                mp[now]--;
            }
            else
            {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
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