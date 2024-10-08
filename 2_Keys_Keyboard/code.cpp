#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int minSteps(int n)
    {
        if (n == 1)
            return 0;

        vector<int> dp(n + 1, n + 1);

        dp[1] = 0;

        for (int i = 2; i <= n; i++)
        {
            for (int j = 1; j <= i / 2; j++)
            {
                if (i % j == 0)
                    dp[i] = min(dp[i], dp[j] + i / j);
            }
        }
        return dp[n];
    }
};