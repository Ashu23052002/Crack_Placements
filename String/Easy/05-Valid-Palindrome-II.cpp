#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    bool isPalindrome(string s, int i, int j)
    {

        while (i < j)
        {

            if (s[i] != s[j])
            {
                return false;
            }
            i++;
            j--;
        }

        return true;
    }

public:
    bool validPalindrome(string s)
    {

        int i = 0, j = s.size() - 1;

        while (i < j)
        {
            if (s[i] == s[j])
            {
                i++;
                j--;
            }
            else
            {
                return isPalindrome(s, i, j - 1) || isPalindrome(s, i + 1, j);
            }
        }

        return true;
    }
};