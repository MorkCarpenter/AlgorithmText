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
int dp[105];
int n, a, b;
void solve()
{
    memset(dp, 0x3f, sizeof(dp));
    dp[0] = 0;
    cin >> n >> a >> b;
    for (int i = 1; i <= n; i++)
    {
        dp[i] = min(dp[i - 1] + a, dp[i]);
    }
    for (int i = 2; i <= n; i++)
    {
        dp[i] = min(dp[i - 2] + b, dp[i]);
    }
    cout << dp[n] << "\n";
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