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
vector<map<int, int>> sum(5005);
map<pair<int, int>, int> s;
int n, ans;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> in[i];
    }
    sort(in, in + n);
    if (n >= 2)
    {
        ans = 2;
    }
    else
    {
        ans = n;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            int len;
            int diff = in[i] - in[j];
            if (s.find(make_pair(j,diff)) != s.end())
            {
                len = s[make_pair(j, diff)] + 1;
            }
            else
            {
                len = 2;
            }
            s[make_pair(i, diff)] = max(s[make_pair(i, diff)], len);
            ans = max(ans, len);
        }
    }
    cout << ans;
    return 0;
}