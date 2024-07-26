#include <bits/stdc++.h>
using namespace std;

vector<int> countBits(int n)
{
    vector<int> result(n + 1);
    for (int i = 0; i <= n; i++)
    {
        result[i] = result[i / 2] + (i & 1);
    }
    return result;
}
/*===============================================*/
vector<int> countBits(int n)
{

    vector<int> ans(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        int cnt = 0;
        for (int j = 0; j <= 31; j++)
        {
            if (i & (1 << j))
                cnt++;
        }
        ans[i] = cnt;
    }

    return ans;
}