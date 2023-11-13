#include <bits/stdc++.h>
using namespace std;
int n;
void solve()
{
    cin >> n;
    if (n % 3 == 0)
    {
        if (n <= 9)
            cout << "NO\n";
        else
        {
            cout << "YES\n";
            cout << "1 4 " << n - 5 << "\n";
        }
    }
    else
    {
        if (n < 6)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            cout << "1 2 " << n - 3 << "\n";
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    int _t;
    cin >> _t;
    while (_t--)
        solve();
    return 0;
}