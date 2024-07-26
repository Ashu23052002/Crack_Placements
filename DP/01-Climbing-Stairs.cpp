#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int solve(int n, vector<int> &dp)
    {

        if (n < 0)
            return 0;
        if (n == 0)
            return 1;

        if (dp[n] != -1)
            return dp[n];

        int steps = solve(n - 1, dp) + solve(n - 2, dp);

        return dp[n] = steps;
    }
    int climbStairs(int n)
    {

        vector<int> dp(n + 1, -1);
        return solve(n, dp);
    }
};

/*===========================================================*/

int climbStairs(int n)
{

    vector<int> dp(n + 1, 0);

    dp[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        int one = dp[i - 1];
        int two = 0;
        if (i - 2 >= 0)
            two = dp[i - 2];

        dp[i] = one + two;
    }
    return dp[n];
}

/*================================================================*/

int climbStairs(int n)
{

    vector<int> dp(n + 1, 0);

    int zero = 1;
    int one = 1;
    for (int i = 2; i <= n; i++)
    {
        int sum = one + zero;
        zero = one;
        one = sum;
    }
    return one;
}