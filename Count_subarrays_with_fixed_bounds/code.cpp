#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    long long countSubarrays(vector<int> &nums, int minK, int maxK)
    {
        long long int ans = 0;
        int lb = -1, lmn = -1, lmx = -1, i, n = nums.size();
        for (i = 0; i < n; i++)
        {
            if (nums[i] >= minK && nums[i] <= maxK)
            {
                lmn = (nums[i] == minK) ? i : lmn;
                lmx = (nums[i] == maxK) ? i : lmx;
                ans += max(0, min(lmn, lmx) - lb);
            }
            else
            {
                lb = i, lmn = -1, lmx = -1;
            }
        }
        return ans;
    }
};