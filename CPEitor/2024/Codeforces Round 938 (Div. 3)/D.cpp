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
map<int, int> mpb;
int n, m, k;
int sum, in;
int a[200005], b[200005];
int ans;
void solve()
{
    cin >> n >> m >> k;
    sum = 0, ans = 0;
    mpb = map<int, int>();
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
    {
        cin >> in;
        mpb[in]++;
    }
    for (int i = 0; i < m; i++)
    {
        if (mpb.find(a[i]) != mpb.end())
        {
            if (mpb[a[i]] > 0)
            {
                sum++;
            }
            mpb[a[i]]--;
        }
    }
    if (sum >= k)
        ans++;
    for (int i = m; i < n; i++)
    {

        if (mpb.find(a[i - m]) != mpb.end())
        {
            mpb[a[i - m]]++;
            if (mpb[a[i - m]] > 0)
            {
                sum--;
            }
        }
        if (mpb.find(a[i]) != mpb.end())
        {
            if (mpb[a[i]] > 0)
            {
                sum++;
            }
            mpb[a[i]]--;
        }
        if (sum >= k)
            ans++;
    }
    cout << ans << "\n";
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