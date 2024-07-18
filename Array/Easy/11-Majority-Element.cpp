#include <bits/stdc++.h>
using namespace std;


    int majorityElement(vector<int> &nums)
    {
        // Write your code here
        int cnt = 0;
        int n = nums.size();
        int ele;

        for (auto it : nums)
        {
            if (cnt == 0)
            {
                ele = it;
                cnt = 1;
            }
            else if (it == ele)
                cnt++;
            else
                cnt--;
        }

        int cnt1 = 0;
        for (auto it : nums)
        {
            if (ele == it)
                cnt1++;
        }

        if (cnt1 > n / 2)
            return ele;

        return -1;
    }
