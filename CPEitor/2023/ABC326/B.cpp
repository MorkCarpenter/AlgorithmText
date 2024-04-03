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
int in;
bool ok(int x)
{
    int a = x / 100;
    int b = (x / 10) % 10;
    int c = x % 10;
    if (a * b == c)
    {
        return true;
    }
    return false;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    cin >> in;
    for (int i = 0; i < 919; i++)
    {
        if (ok(i + in))
        {
            cout << i + in;
            return 0;
        }
    }
}