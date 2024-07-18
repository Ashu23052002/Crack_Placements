#include <bits/stdc++.h>
using namespace std;

int maximumProduct(vector<int> &nums)
{

    int a = -1001;
    int b = -1001;
    int c = -1001;
    int d = 1001;
    int e = 1001;

    for (auto it : nums)
    {
        if (it >= a)
        {
            c = b;
            b = a;
            a = it;
        }
        else if (it >= b)
        {
            c = b;
            b = it;
        }
        else if (it >= c)
        {
            c = it;
        }

        if (it <= e)
        {
            d = e;
            e = it;
        }
        else if (it <= d)
        {
            d = it;
        }
    }

    return max(a * b * c, a * d * e);
}