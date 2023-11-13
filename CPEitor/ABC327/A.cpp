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
int a, b, c;
string in;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    cin >> a >> in;
    for (int i = 0; i < in.size(); i++)
    {
        if (in[i] == 'a' && in[i + 1] == 'b')
        {
            cout << "Yes\n";
            return 0;
        }
        else if (in[i] == 'b' && in[i + 1] == 'a')
        {
            cout << "Yes\n";
            return 0;
        }
    }
    cout << "No\n";
    return 0;
}