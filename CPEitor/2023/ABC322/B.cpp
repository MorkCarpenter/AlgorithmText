#include <iostream>
using namespace std;
bool a, b, c;

string ina, inb;
int n, m;
int main()
{
    ios::sync_with_stdio(false);
    cin >> n >> m;
    cin >> ina >> inb;
    for (int i = 0; i < n; ++i)
    {
        if (ina[i] != inb[i])
        {
            a = true;
            break;
        }
    }
    for (int i = 1; i <= n; ++i)
    {
        if (ina[n - i] != inb[m - i])
        {
            b = true;
            break;
        }
    }
    if (!a && !b)
    {
        cout << 0;
    }
    else if (!a && b)
    {
        cout << 1;
    }
    else if (!b && a)
    {
        cout << 2;
    }
    else if (a && b)
    {
        cout << 3;
    }
    return 0;
}