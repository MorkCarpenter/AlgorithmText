#include <bits/stdc++.h>
using namespace std;
long long in, a, b;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    cin >> in;
    while (!(in % 2))
    {
        in /= 2;
    }
    while (!(in % 3))
    {
        in /= 3;
    }
    if (in == 1)
        cout << "Yes\n";
    else
    {
        cout << "No\n";
    }
    return 0;
}