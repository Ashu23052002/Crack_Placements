#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string addBinary(string a, string b)
    {
        int i = a.size() - 1;
        int j = b.size() - 1;

        string ans = "";

        int carry = 0;
        while (i >= 0 || j >= 0)
        {
            int sum = carry;
            if (i >= 0)
                sum += a[i--] - '0';
            if (j >= 0)
                sum += b[j--] - '0';
            ans = char(sum % 2 + '0') + ans;
            carry = sum / 2;
        }

        if (carry)
            ans = '1' + ans;

        return ans;
    }
};
