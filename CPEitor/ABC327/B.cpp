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
#define MAXN 1000000000000000000;
using namespace std;
unordered_map<long long, long long> m;
long long in;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    for (long long i = 1; i <= 18; i++)
    {
        long long tmp = i;
        for (int j = 1; j < i; j++)
        {
            tmp *= i;
        }
        m.insert({tmp, i});
    }
    cin >> in;
    if (m.find(in) != m.end())
    {
        cout << m[in];
        return 0;
    }
    cout << -1;
    return 0;
}