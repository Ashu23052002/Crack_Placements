#include <bits/stdc++.h>
using namespace std;

long long minimumOperations(vector<int> &nums, vector<int> &target)
{

    int n = nums.size();
    vector<int> diff(n, 0);

    for (int i = 0; i < n; i++)
    {
        diff[i] = target[i] - nums[i];
    }

    long long result = 0;
    int prev = 0;
    for (int i = 0; i < n; i++)
    {
        int curr = diff[i];
        // 1. if sign change
        // diff sign aaya means new subarray start hoga
        if ((curr < 0 && prev > 0) || (curr > 0 && prev < 0))
        {
            result += abs(curr);
        }
        // 2. choosing subarray
        // same sign - wo subarray increase karege
        else if (abs(curr) > abs(prev))
        {
            result += abs(curr - prev);
        }
        // 3. prev >= curr
        // we have already increase more than curr
        // else{
        //     continue;
        // }
        prev = diff[i];
    }

    return result;
}