// LeetCode : https://leetcode.com/problems/longest-consecutive-sequence/

#include <bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int> &nums)
{

    if (nums.size() == 0)
    {
        return 0;
    }

    sort(nums.begin(), nums.end());
    int len = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (i == nums.size() - 1 && len == 0)
        {
            return 1;
        }
        if (nums[i + 1] == nums[i] + 1)
        {
            len++;
        }
    }
    len++;
    return len;
}

int main()
{
    vector<int> nums = {0, -1};
    cout << longestConsecutive(nums);

    return 0;
}