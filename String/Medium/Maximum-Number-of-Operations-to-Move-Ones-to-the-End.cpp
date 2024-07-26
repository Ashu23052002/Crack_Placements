#include <bits/stdc++.h>
using namespace std;

// if asking for maximum so start with left
// if asking for minimum start with right
int maxOperations(string s)
{

    int i = 0;
    int n = s.size();
    int one = 0, cnt = 0;

    while (i < n)
    {
        if (s[i] == '1')
        {
            cnt += one;
            while (i < n && s[i] != '0')
            {
                one++;
                i++;
            }
        }
        else
        {
            i++;
        }
    }

    if (s[n - 1] == '0')
        cnt += one;

    return cnt;
}