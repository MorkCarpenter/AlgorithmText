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
using namespace std;
typedef long long ll;
int n, m;
double ans;
int a, b;
double c;
double nums[1005];
double mp[1005];
int main()
{
    cin.tie(nullptr), cout.tie(nullptr);
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
        cin >> nums[i];
    for (int i = 0; i < m; ++i)
    {
        cin >> a >> b >> c;
        if (nums[a] < c)
            break;
        else
        {
            nums[a] -= c;
            double tmp = fmod(c, 1.0);
            ans += tmp;
            mp[b] += tmp;
            nums[b] += c - tmp;
            if (mp[b] > 1.0)
                break;
        }
    }
    printf("%.2f", ans);
    return 0;
}