#include <iostream>
using namespace std;
bool a, b, c;
int be;
int main()
{
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    string in;
    cin >> in;
    for (int i = 0; i + 2 < n; i++)
    {
        if (in[i] == 'A' && in[i + 1] == 'B' && in[i + 2] == 'C')
        {
            cout << i + 1;
            return 0;
        }
    }
    cout << -1;
    return 0;
}