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
int a, b;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    cin >> a >> b;
    if (a > b)
    {
        if (a - b > 3)
        {
            cout << "No\n";
        }
        else
        {
            cout << "Yes\n";
        }
    }
    else
    {
        if (b - a > 2)
        {
            cout << "No\n";
        }
        else
        {
            cout << "Yes\n";
        }
    }
}