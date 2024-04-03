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
int mp[15][15];
bool ok[15];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    for (int i = 1; i <= 9; ++i)
    {
        memset(ok, 0, sizeof(ok));
        for (int j = 1; j <= 9; ++j)
        {
            cin >> mp[i][j];
            if (ok[mp[i][j]])
            {
                cout << "No";
                return 0;
            }
            else
            {
                ok[mp[i][j]] = 1;
            }
        }
    }
    for (int i = 1; i <= 9; i++)
    {
        memset(ok, 0, sizeof(ok));
        for (int j = 1; j <= 9; j++)
        {

            if (ok[mp[j][i]])
            {
                cout << "No";
                return 0;
            }
            else
            {
                ok[mp[j][i]] = 1;
            }
        }
    }
    for (int i = 0; i <= 6; i += 3)
    {
        memset(ok, 0, sizeof(ok));
        for (int j = 1; j <= 3; j++)
        {
            for (int k = 1; k <= 3; k++)
            {
                if (ok[mp[i + j][k]])
                {
                    cout << "No";
                    return 0;
                }
                else
                {
                    ok[mp[i + j][k]] = 1;
                }
            }
        }
    }
    for (int i = 0; i <= 6; i += 3)
    {
        memset(ok, 0, sizeof(ok));
        for (int j = 1; j <= 3; j++)
        {
            for (int k = 1; k <= 3; k++)
            {
                if (ok[mp[i + j][k + 3]])
                {
                    cout << "No";
                    return 0;
                }
                else
                {
                    ok[mp[i + j][k + 3]] = 1;
                }
            }
        }
    }
    for (int i = 0; i <= 6; i += 3)
    {
        memset(ok, 0, sizeof(ok));
        for (int j = 1; j <= 3; j++)
        {
            for (int k = 1; k <= 3; k++)
            {
                if (ok[mp[i + j][k + 6]])
                {
                    cout << "No";
                    return 0;
                }
                else
                {
                    ok[mp[i + j][k + 6]] = 1;
                }
            }
        }
    }
    cout << "Yes";
    return 0;
}