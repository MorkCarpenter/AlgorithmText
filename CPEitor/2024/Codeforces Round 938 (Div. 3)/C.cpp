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
ll n, k;
ll in[200005];
void solve()
{
    int ans = 0;
    cin >> n >> k;
    ll l = (k / 2) + (k % 2);
    ll r = (k / 2);
    for (int i = 0; i < n; i++)
    {
        cin >> in[i];
        if (l == 0)
            ans++;
        else if (l > 0)
        {
            l -= in[i];
            if (l < 0)
            {
                in[i] = -l;
                ans++;
                l = 0;
            }
        }
    }
    for (int i = n - 1; i >= 0 && ans > 0; i--)
    {
        r -= in[i];
        if (r < 0)
        {
            break;
        }
        else if (r == 0)
        {
            ans--;
            break;
        }
        ans--;
    }
    cout << n - ans << "\n";
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