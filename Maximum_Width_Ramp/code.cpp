#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int maxWidthRamp(vector<int> &nums)
    {
        int n = nums.size();
        stack<int> st;

        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            if (st.empty() || nums[st.top()] > nums[i])
            {
                st.push(i);
            }
        }

        for (int i = n - 1; i >= 0; i--)
        {
            while (!st.empty() && nums[i] >= nums[st.top()])
            {
                ans = max(ans, i - st.top());
                st.pop();
            }
        }
        return ans;
    }
};