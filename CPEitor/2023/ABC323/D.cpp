#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
#define mod 1000000007
using namespace std;
int n;
long long s, c;
set<pair<int, int>> st;
int main()
{
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s >> c;
        int tmpa = s, tmpb = 0;
        while (tmpa % 2 == 0)
        {
            tmpa >>= 1;
            tmpb++;
        }
        for (int j = 0; j <= 32; ++j)
        {
            if ((c >> j) & 1)
            {
                st.insert({tmpa, tmpb + j});
            }
        }
    }
    cout << st.size();
    return 0;
}