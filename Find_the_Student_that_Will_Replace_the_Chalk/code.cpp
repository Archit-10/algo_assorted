#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int chalkReplacer(vector<int> &chalk, int k)
    {
        int n = chalk.size();
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += (long long)chalk[i];
        }
        k = k % sum;
        for (int i = 0; i < n; i++)
        {
            if (k < chalk[i])
                return i;
            k -= chalk[i];
        }
        return -1;
    }
};