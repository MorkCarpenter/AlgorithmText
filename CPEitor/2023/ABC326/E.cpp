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
#define MOD 998244353
using namespace std;
double dp[300001];
long long sum[300001];
int in[300001];
int n;
long long ans;
int main()
{
    dp[0] = 1.0;
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> in[i];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j + i <= n; j++)
        {
            dp[i + j] += dp[i] * (1.0 / (double)n);
            sum[i + j] += ((sum[i] + in[i + j]) % MOD);
            sum[i + j] %= MOD;
        }

        ans += dp[i] * sum[i] * ((double)i / (double)n);
    }
    cout << ans % MOD;
    return 0;
}