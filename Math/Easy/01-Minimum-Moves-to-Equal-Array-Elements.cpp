#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minMoves(vector<int> &nums)
    {

        int mini = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            mini = min(mini, nums[i]);
        }
        int cnt = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            cnt += nums[i] - mini;
        }

        return cnt;
    }
};