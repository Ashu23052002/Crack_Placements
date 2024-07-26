#include <bits/stdc++.h>
using namespace std;

long long int findMaxProduct(vector<int> &arr)
{
    // Write your code here
    if (arr.size() == 1)
        return arr[0];
    long long int mod = 1e9 + 7;

    int zero = 0, one = 0, ne = 0, minne = INT_MIN;
    long long int ans = 1;
    for (auto it : arr)
    {
        if (it == 0)
            zero++;
        else if (it < 0)
        {
            ne++;
            minne = max(minne, it);
            ans = ans * it;
        }
        else
        {
            if (it == 1)
                one++;
            ans = ans * it;
        }
        ans = ans % mod;
    }

    if (ans == 1)
    {
        if (one > 0)
            return ans;
        else
            return 0;
    }
    if (ans < 0)
    {
        if (minne != INT_MIN && minne != 0)
        {
            ans = ans / minne;
        }
    }
    return ans % mod;
}