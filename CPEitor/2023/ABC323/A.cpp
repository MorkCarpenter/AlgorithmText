#include <iostream>
using namespace std;
string str;
int main()
{
    cin >> str;
    for (int i = 1; i < str.length(); i += 2)
    {
        if (str[i] == '1')
        {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}