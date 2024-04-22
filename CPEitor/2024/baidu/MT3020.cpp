#include <iostream>
using namespace std;
int n, m, vis[500010];
long long ans, nums[500010], sum[500010];
int main()
{
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
    {
        scanf("%lld", &nums[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        sum[i] = sum[i - 1] ^ nums[i];
    }
    for (int i = 62; i >= 0; i--)
    {
        int Count = 0;
        for (int j = 1; j <= n; ++j)
        {
            if (!vis[j] && (sum[j] & (1ll << i)) == 0)
            {
                Count++;
            }
        }
        if (Count >= m && (sum[n] & (1ll << i)) == 0)
        {
            for (int j = 1; j <= n; ++j)
            {
                if (sum[j] & (1ll << i))
                {
                    vis[j] = 1;
                }
            }
        }
        else
            ans |= (1ll << i);
    }
    cout << ans << endl;
    return 0;
}
