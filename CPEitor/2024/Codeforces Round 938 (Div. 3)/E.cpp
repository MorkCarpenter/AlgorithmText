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
int sum[505];
char pro, now, pronum, nownum;
int ans, tmp;
void solve()
{
    cin >> n;
    pro = 0;
    ans = now = 0;
    sum['1'] = sum['0'] = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> in;
        if (now == 0)
        {
            now = in;
            tmp++;
            nownum++;
            continue;
        }
        if (in == now)
        {
            tmp++;
            nownum++;
            continue;
        }
        else if (pro == 0)
        {
            tmp++;
            pro = now;
            pronum = nownum;
            now = in;
            nownum = 1;
            continue;
        }
        else
        {
            ans = max(ans, tmp);
            tmp -= pronum;
            tmp++;
            pro = now;
            pronum = nownum;
            now = in;
            nownum = 1;
            continue;
        }
    }
    ans = max(ans, tmp);
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