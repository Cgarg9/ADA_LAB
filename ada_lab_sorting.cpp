#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {18, 56, 27, 7, 8, 4, 9, 31, 81, 1};
    // smallest element first
    int n = v.size();
    // for (int i = 0; i < n - 1; i++)
    // {
    //     int min_index = i;
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (v[j] < v[min_index])
    //         {
    //             min_index = j;
    //         }
    //         swap(v[i], v[min_index]);
    //     }
    // }
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    //
    // ----------------------------------------------------------------
    // // bubble sort
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = 0; j < n - i - 1; j++)
    //     {
    //         if (v[j] > v[j + 1])
    //         {
    //             swap(v[j], v[j + 1]);
    //         }
    //     }
    // }
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // ---------------------------------------------------------------
    // insertion sort
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        int key = v[i];
        while (j >= 0 && v[j] > key)
        {
            v[j + 1] = v[j];
            j -= 1;
        }
        v[i + 1] = key;
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return -1;
}