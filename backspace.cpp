#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool backspaceCompare(string s, string t)
    {
        stack<char> ss, tt;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '#' && !ss.empty())
                ss.pop();
            else
            {
                ss.push(s[i]);
            }
        }
        for (int i = 0; i < t.size(); i++)
        {
            if (t[i] == '#' && !tt.empty())
                tt.pop();
            else
            {
                tt.push(t[i]);
            }
        }
        if (ss.size() != tt.size())
            return false;
        while (!ss.empty())
        {
            if (ss.top() != tt.top())
                return false;
                ss.pop();
                tt.pop();
        }
        return true;
    }
};