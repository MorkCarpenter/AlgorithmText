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
int tree[100005];
int n, m, a, b;
char in;
int find(int x)
{
    if (x != tree[x])
        return tree[x] = find(tree[x]);
    else
        return tree[x];
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        tree[i] = i;
    for (int i = 0; i < m; i++)
    {
        cin >> in >> a >> b;
        if (in == 'M')
        {
            tree[find(a)] = find(b);
        }
        else
        {
            if (find(a) == find(b))
            {
                cout << "Yes\n";
            }
            else
            {
                cout << "No\n";
            }
        }
    }
}