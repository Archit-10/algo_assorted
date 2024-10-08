#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int countConsistentStrings(string allowed, vector<string> &words)
    {

        int cnt = 0;
        unordered_map<char, int> mp;
        for (int i = 0; i < allowed.size(); i++)
        {
            mp[allowed[i]] = 1;
        }
        for (int i = 0; i < words.size(); i++)
        {
            bool flag = true;
            for (int j = 0; j < words[i].size(); j++)
            {
                if (mp.find(words[i][j]) == mp.end())
                {
                    flag = false;
                    break;
                }
            }
            if (flag == true)
            {
                cnt++;
            }
        }
        return cnt;
    }
};