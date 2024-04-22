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
typedef long long ll;
using namespace std;
int nums[600];
deque<int> q;
int n, m, k, mod, in;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    cin >> n >> m;
    mod = n * m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> in;
            q.push_back(in);
        }
    }
    cin >> k;
    k %= mod;
    for (int i = 0; i < mod - k; i++)
    {
        q.push_back(q.front());
        q.pop_front();
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << q.front() << " ";
            q.pop_front();
        }
        cout << "\n";
    }
}