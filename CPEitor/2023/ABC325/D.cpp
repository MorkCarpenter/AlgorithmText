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
long long n, t, d;
set<long long> s;
int ans = 0;
long long a[1000000];
long long b[1000000];
struct node
{
    long long a, b;
} nodes[200005];
bool cmp(node a, node b)
{
    return a.a < b.a;
}
long long tend;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> nodes[i].a >> nodes[i].b;
        tend = max(nodes[i].a + nodes[i].b, tend);
    }
    sort(nodes, nodes + n, cmp);
    long long time = nodes[0].a;
    int pos = 0;

    while (time < tend)
    {
        time = nodes[pos].a;
        for (pos; nodes[pos].a <= time && pos < n;)
        {
            if (nodes[pos].a == time)
            {
                ans++;
                pos++;
            }
            else
            {
                s.insert(nodes[pos].b);
                pos++;
            }
        }

        while ((pos >= n || time < nodes[pos].a) && s.size())
        {
            auto ptr = s.begin();
            time = *ptr;
            if (ptr != s.end() && *ptr <= time)
            {
                ans++;
                s.erase(ptr);
            }
        }
    }
    cout << ans;
    return 0;
}