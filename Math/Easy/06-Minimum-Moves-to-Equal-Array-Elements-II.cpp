#include <bits/stdc++.h>
using namespace std;

int minMoves2(vector<int> &nums)
{

    sort(nums.begin(), nums.end());

    int n = nums.size();

    int median = n / 2;

    int cnt = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        cnt += abs(nums[i] - nums[median]);
    }

    return cnt;
}