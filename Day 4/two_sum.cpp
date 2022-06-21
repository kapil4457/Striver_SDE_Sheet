// LeetCode : https://leetcode.com/problems/two-sum/
// Coding Ninja :https://www.codingninjas.com/codestudio/problems/pair-sum_697295?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {

        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if (i != j)
                {
                    if (nums[i] + nums[j] == target)
                    {
                        ans.push_back(i);
                        ans.push_back(j);

                        return ans;
                    }
                }
            }
        }

        return ans;
    }
};

// Coding Ninja
#include <bits/stdc++.h>
vector<vector<int>> pairSum(vector<int> &arr, int s)
{
    // Write your code here.

    vector<vector<int>> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i; j < arr.size(); j++)
        {
            if (i != j)
            {
                if (arr[i] + arr[j] == s)
                {
                    vector<int> add;
                    add.push_back(arr[i]);
                    add.push_back(arr[j]);
                    sort(add.begin(), add.end());
                    ans.push_back(add);
                }
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}