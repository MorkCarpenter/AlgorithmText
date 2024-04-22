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
typedef long long ll;
int n, m;
int mod = 1000000;
int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    cin >> n >> m;
    int temp = gcd(n, m);
    int f1 = 0, f2 = 1, ans = 1;

    for (int i = 2; i <= temp; i++)
    {
        ans = f1 + f2;
        ans %= mod;
        f1 = f2;
        f2 = ans;
    }
    cout << ans;
    return 0;
}