#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {

        string ans = "";
        sort(strs.begin(), strs.end()); // sorted in lexographical order

        int n = strs.size();

        string f = strs[0];
        string l = strs[n - 1];

        for (int i = 0; i < min(f.size(), l.size()); i++)
        {
            if (f[i] != l[i])
                return ans;

            ans += f[i];
        }

        return ans;
    }
};