#include <algorithm>
#include <iostream>
using namespace std;
int a[3], b, c;
void solve()
{
    cin >> a[0] >> a[1] >> a[2];

    if (a[0] == a[1] && a[1] == a[2])
    {
        cout << "YES\n";
        return;
    }
    sort(a, a + 3);
    if (a[1] % a[0] != 0 || a[2] % a[0] != 0)
    {
        cout << "NO\n";
    }
    else if (a[1] / a[0] + a[2] / a[0] - 2 <= 3)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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