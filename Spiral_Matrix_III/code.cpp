#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart)
    {
        int directions[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        int n = rows * cols;
        vector<vector<int>> res;
        res.push_back({rStart, cStart});

        int count = 1;
        int steps = 1;
        int index = 0;

        while (count < n)
        {
            for (int times = 0; times < 2; times++)
            {
                int dr = directions[index % 4][0];
                int dc = directions[index % 4][1];

                for (int i = 0; i < steps; i++)
                {
                    rStart += dr;
                    cStart += dc;

                    if (rStart >= 0 && rStart < rows && cStart >= 0 && cStart < cols)
                    {
                        res.push_back({rStart, cStart});
                        count++;
                    }
                }

                index++;
            }
            steps++;
        }

        return res;
    }
};