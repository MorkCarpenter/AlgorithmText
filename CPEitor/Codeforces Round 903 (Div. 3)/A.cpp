#include <bits/stdc++.h>
using namespace std;
int n, m;
string a, b;
void solve()
{
    cin >> n >> m;
    cin >> a >> b;
    int ans = 0;
    int pos = 0;
    for (int i = 0; i < n && pos < m; i++)
    {
        if (a[i] != b[pos])
        {
            pos = 0;
        }
        if (a[i] == b[pos])
        {
            pos++;
        }
    }
    ans++;
    while (pos < m)
    {
        for (int i = 0; i < n && pos + i < m; i++)
        {
            if (a[i] != b[pos + i])
            {
                cout << -1 << "\n";
                return;
            }
        }
        pos += n;
        ans++;
    }
    for (int i = 0; i < 16; ++i)
    {
        if (ans <= (1 << i))
        {
            cout << i << "\n";
            return;
        }
    }
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