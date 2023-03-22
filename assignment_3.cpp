Q1)
#include <bits/stdc++.h>
using namespace std;
int denomination(int n)
{
    vector<int> v = {1, 5, 10};
    int count = 0;
    while (n)
    {
        for (int i = v.size() - 1; i >= 0; i--)
        {
            int total = 0;
            if (v[i] > n)
            {
                continue;
            }
            else
            {
                total = n / v[i];
                n -= total * v[i];
                count += total;
            }
        }
    }
    return count;
}
int main()
{
    int n;
    cin >> n;
    cout << denomination(n);
    return 0;
}

Q2)

int refills(int dist, int capacity, int stops, vector<int> v)
{
    int count = 0;
    int travelled = 0;
    int d = 0;
    for (int i = 1; i < stops + 1; i++)
    {
        if (v[i] - v[i - 1] > capacity)
        {
            return -1;
        }
    }
    while (d < dist)
    {
        for (int i = 0; i < stops + 1; i++)
        {
            if (v[i] - travelled > capacity)
            {
                count += 1;
                travelled = v[i - 1];
                d = travelled;
                i -= 1;
            }
        }
        if (v[stops] - v[stops - 1] < capacity)
        {
            break;
        }
    }
    return count;
}
int main()
{
    // int n;
    // cin >> n;
    // cout << denomination(n);
    vector<int> v = {200, 375, 550, 750, 950};
    cout << refills(950, 400, 4, v);
    return 0;
}
