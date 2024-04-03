#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
using namespace std;
string in, s;
int n;
int ans[500005], top;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    cin >> n >> s;
    for (int i = 0; i < n; ++i)
    {
        cin >> in;
        int flag = 0;
        if ((in.size() > s.size() && in.size() - s.size() > 1) || (s.size() > in.size() && s.size() - in.size() > 1))
        {
            continue;
        }
        else if (in.size() - s.size() == 1)
        {
            int tmp = 0;
            for (int j = 0; j < s.size(); j++)
            {
            conti:;
                if (in[j + tmp] != s[j])
                {
                    if (tmp)
                    {
                        goto next;
                    }
                    else
                    {
                        tmp++;
                        goto conti;
                    }
                }
            }
        }
        else if (s.size() - in.size() == 1)
        {
            int tmp = 0;
            for (int j = 0; j < in.size(); j++)
            {
            conti2:;
                if (s[j + tmp] != in[j])
                {
                    if (tmp)
                    {
                        goto next;
                    }
                    else
                    {
                        tmp++;
                        goto conti2;
                    }
                }
            }
        }
        else if (in.size() == s.size())
        {
            int tmp = 0;
            for (int j = 0; j < in.size(); j++)
            {
                if (in[j] != s[j])
                {
                    if (tmp)
                    {
                        goto next;
                    }
                    else
                    {
                        tmp = 1;
                    }
                }
            }
        }
        ans[top++] = i + 1;
    next:;
    }
    cout << top << "\n";
    for (int i = 0; i < top; i++)
    {
        cout << ans[i] << " ";
    }
}
