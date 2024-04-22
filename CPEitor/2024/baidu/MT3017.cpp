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
int in[5005];
int n;
int row(int l, int r)
{
    return r - l + 1;
}
int col(int l, int r)
{
    int hmin = 0x3f3f3f3f;
    for (int i = l; i <= r; i++)
    {
        hmin = min(hmin, in[i]);
    }
    for (int i = l; i <= r; i++)
    {
        in[i] -= hmin;
    }
    int res = hmin;
    while (l <= r)
    {
        while (l <= r && in[l] == 0)
            l++;
        int temp = l;
        while (temp <= r && in[temp] != 0)
        {
            temp++;
        }
        res += min(col(l, temp - 1), row(l, temp - 1));
        l = temp;
    }
    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> in[i];
    }
    cout << min(row(1, n), col(1, n));
    return 0;
}