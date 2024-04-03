#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int n, m;
int nums[105], player[105];
int _max;
vector<string> str(105);
struct node
{
    int sign;
    int num;
} nodes[105];
bool cmp(node a, node b)
{
    if (a.num == b.num)
    {
        return a.sign < b.sign;
    }
    return a.num < b.num;
}
int main()
{
    ios::sync_with_stdio(false);
    cin >> m >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> nodes[i].num;
        nodes[i].sign = i;
    }
    for (int i = 0; i < m; ++i)
    {
        player[i] += i + 1;
        cin >> str[i];
        for (int j = 0; j < n; ++j)
        {
            if (str[i][j] == 'o')
            {
                player[i] += nodes[j].num;
            }
        }
        _max = max(_max, player[i]);
    }
    sort(nodes, nodes + n, cmp);
    for (int i = 0; i < m; i++)
    {
        int ans = 0;
        for (int j = n - 1; j >= 0; j--)
        {
            if (player[i] >= _max)
            {
                cout << ans << '\n';
                break;
            }
            if (str[i][nodes[j].sign] == 'o')
            {
                continue;
            }
            player[i] += nodes[j].num;
            ans++;
        }
    }
    return 0;
}