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
int meme[300001];
int in[300001];
int n, m;
int top;
size_t ans;
deque<int> dq;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> in[i];
    sort(in, in + n);
    for (int i = 0; i < n; i++)
    {
        dq.push_back(in[i]);
        while (in[i] - dq.front() >= m)
        {
            dq.pop_front();
        }
        ans = max(ans, dq.size());
    }
    cout << ans;
}