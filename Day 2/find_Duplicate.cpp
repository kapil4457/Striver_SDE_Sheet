// LeetCode : https://leetcode.com/problems/find-the-duplicate-number/submissions/
// Coding Ninja : https://www.codingninjas.com/codestudio/problems/1112602?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == nums[i - 1])
                return nums[i];
        }
        return -1;
    }
};