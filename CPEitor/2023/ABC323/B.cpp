#include <algorithm>
#include <iostream>
using namespace std;
int n;
string str;
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
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        nodes[i].sign = i;
        cin >> str;
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            if (str[j] == 'o')
            {
                nodes[j].num++;
            }
        }
    }
    sort(nodes, nodes + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << nodes[i].sign + 1 << ' ';
    }
    return 0;
}