#include <bits/stdc++.h>

using namespace std;
int x, mod, pro;
int main()
{
    cin >> x >> mod;
    while ((pro % mod) && (pro % mod) != x)
    {
        pro += pro % mod;
    }
    if (!(pro % mod))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}