#include <bits/stdc++.h>
using namespace std;

int findMinDiff(vector<int> &arr, int n, int m)
{

    if (m == 0 || n == 0)
        return 0;

    sort(arr.begin(), arr.end());

    if (n < m)
        return -1;

    int minDiff = INT_MAX;

    for (int i = 0; i < n - m; i++)
    {
        int diff = arr[i + m - 1] - arr[i];
        if (diff < minDiff)
            minDiff = diff;
    }
    return minDiff;
}
