#include <bits/stdc++.h>
using namespace std;
bool binary_search(vector<int> &arr, int l, int r, int x)
{
    if (r >= l)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == x)
        {
            cout << arr[mid] << " Found\n";
            return true;
        }
        if (arr[mid] > x)
        {
            return binary_search(arr, l, mid - 1, x);
        }
        return binary_search(arr, mid + 1, r, x);
    }
    return false;
}
int main()
{
    // linear search
    vector<int> arr = {1, 4, 7, 7, 8, 9, 18, 27, 31, 56, 81};
    vector<int> to_find = {1, 81, 7, 3};

    // for (int i = 0; i < to_find.size(); i++)
    // {
    //     bool found = false;
    //     for (int j = 0; j < arr.size(); j++)
    //     {
    //         if (to_find[i] == arr[j])
    //         {
    //             cout << arr[j] << " Found\n";
    //             found = true;
    //             break;
    //         }
    //     }
    //     if (found == false)
    //     {
    //         cout << to_find[i] << " Not found\n";
    //     }
    // }
    // binary search
    int n = arr.size();
    sort(arr.begin(), arr.end());
    for (int i = 0; i < to_find.size(); i++)
    {
        if (!binary_search(arr, 0, n, to_find[i]))
        {
            cout << to_find[i] << " Not found\n";
        }
        }
}
