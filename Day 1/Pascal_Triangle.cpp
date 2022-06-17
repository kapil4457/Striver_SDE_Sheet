// Leet Code :https://leetcode.com/problems/pascals-triangle/
// Coding Ninja : https://www.codingninjas.com/codestudio/problems/1089580?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website
#include <bits/stdc++.h>
vector<vector<long long int>> printPascal(int num)
{
    vector<vector<long long int>> ans;
    for (int i = 0; i < num; i++)
    {
        vector<long long int> temp;
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
                temp.push_back(1);
            else
                temp.push_back(ans[i - 1][j - 1] + ans[i - 1][j]);
        }
        ans.push_back(temp);
    }

    return ans;
}
