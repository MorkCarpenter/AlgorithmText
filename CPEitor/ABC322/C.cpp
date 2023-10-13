#include <algorithm>
#include <iostream>
using namespace std;
int n, m;
int nums[200005];
int main()
{
    ios::sync_with_stdio(false);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int cnt = 1;
    int i = 0;
    while (cnt <= n)
    {
        if (cnt == nums[i])
        {
            cout << 0 << '\n';
            cnt++;
            i++;
            continue;
        }
        else
        {
            cout << nums[i] - cnt << '\n';
            cnt++;
        }
    }
}