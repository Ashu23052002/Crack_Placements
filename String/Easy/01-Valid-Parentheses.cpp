#include <bits/stdc++.h>
using namespace std;

bool isValid(string st)
{

    stack<char> s;

    for (int i = 0; i < st.length(); i++)
    {

        char ch = st[i];

        if (st[i] == '(' || st[i] == '{' || st[i] == '[')
            s.push(st[i]);
        else
        {
            if (s.empty() || (s.top() == '(' && st[i] != ')') ||
                (s.top() == '{' && st[i] != '}') ||
                (s.top() == '[' && st[i] != ']'))
                return false;

            s.pop();
        }
    }
    return s.empty();
}