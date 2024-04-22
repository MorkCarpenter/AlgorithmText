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
int n, m, t;
unordered_map<string, int> mp;
vector<string> vec(50005);
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    cin >> n >> m >> t;
    for (int i = 1; i <= n; ++i)
    {
        cin >> vec[i];
        mp[vec[i]] = i;
    }
    int a, b;
    for (int i = 1; i <= t; i++)
    {
        cin >> a >> b;
        mp[vec[a]] = b;
        mp[vec[b]] = a;
        swap(vec[a], vec[b]);
    }
    string in;
    for (int i = 0; i < m; ++i)
    {

        cin >> in;
        cout << mp[in] << "\n";
    }
    return 0;
}