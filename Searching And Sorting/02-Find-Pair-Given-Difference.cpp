#include <bits/stdc++.h>
using namespace std;

bool findPair(int arr[], int size, int n)
{
    // code 1
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (abs(arr[i] - arr[j]) == n)
            {
                return true;
            }
        }
    }
    return false;

    // code 2
    sort(arr, arr + size);
    int i = 0, j = 1;

    while (i < size && j < size)
    {
        if (arr[j] - arr[i] == n && i != j)
            return true;
        else if (arr[j] - arr[i] > n)
            i++;
        else
            j++;
    }
    return false;

    // code 3
    unordered_map<int, int> mp;
    // for (auto it : arr)
    // {
    //     if (mp[it + n] || mp[it - n])
    //         return 1;
    //     mp[it]++;
    // }
    // return -1;
}