#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool checkValidString(string s)
    {

        int n = s.length();

        vector<vector<int>> cache(n + 1, vector<int>(n + 1, -1));

        auto dp = [&](auto &dp, int i, int bal) -> bool
        {
            if (i >= s.length())
            {
                if (bal == 0)
                {
                    return true;
                }
                return false;
            }
            if (bal < 0)
            {
                return false;
            }
            if (cache[i][bal] != -1)
            {
                return cache[i][bal];
            }
            bool is_good = false;
            if (s[i] == '(')
            {
                is_good |= dp(dp, i + 1, bal + 1);
            }
            else if (s[i] == ')')
            {
                is_good |= dp(dp, i + 1, bal - 1);
            }
            else if (s[i] == '*')
            {
                is_good |= dp(dp, i + 1, bal + 1);
                is_good |= dp(dp, i + 1, bal - 1);
                is_good |= dp(dp, i + 1, bal);
            }

            return cache[i][bal] = is_good;
        };

        return dp(dp, 0, 0);
    }
};