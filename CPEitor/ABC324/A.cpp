#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    int n, in, tmp;
    cin >> n >> tmp;
    for (int i = 1; i < n; ++i)
    {
        cin >> in;
        if (in != tmp)
        {
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
}