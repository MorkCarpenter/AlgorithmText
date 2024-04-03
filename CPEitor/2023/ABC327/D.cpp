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
int tree[200005];
int sum[200005];
int find(int x)
{
    if (x != tree[x])
        return tree[x] = find(tree[x]);
    return tree[x];
}
int a[200005], b[200005];
vector<vector<int>> v;
set<int, int> st;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
    {
        tree[i] = i;
        sum[i] = 1;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; ++i)
    {
        cin >> b[i];
    }
    for (int i = 0; i < m; ++i)
    {
        st.insert({a[i], b[i]});
    }
    for (int i = 0; i < m; ++i)
    {
        // 判断是否是同一个集合
        if (find(a[i]) != find(b[i]))
        {
            sum[find(b[i])] += sum[find(a[i])];
            tree[find(a[i])] = find(b[i]);
            v[b[i]].push_back(a[i]);
            v[a[i]].push_back(b[i]);
        }
        else
        {
                }
    }
    cout << "Yes";
    return 0;
}