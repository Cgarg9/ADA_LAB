#include <bits/stdc++.h>
using namespace std;
bool palindrone(string &str, int s, int e)
{
    if (s == e)
    {
        return true;
    }
    if (str[s] != str[e])
    {
        return false;
    }
    if (s < e + 1)
    {
        return palindrone(str, s + 1, e - 1);
    }
    return true;
}
int exponent(int base, int exponent)
{
    int ans = 1;
    if (exponent == 0)
    {
        return 1;
    }
    else
    {
        while (exponent > 0)
        {
            if (exponent & 1)
            {
                ans *= base;
            }
            exponent >>= 1;
            base *= base;
        }
        return ans;
    }
}
int main()
{
    // string s;
    // cin >> s;
    // if (palindrone(s, 0, s.length() - 1) == true)
    // {
    //     cout << s << " "
    //          << "is a palindrone\n";
    // }
    // else
    // {
    //     cout << s << " "
    //          << "is not a palindrone\n";
    // }
    int b, e;
    cin >> b >> e;
    cout << exponent(b, e);

    return 0;
}