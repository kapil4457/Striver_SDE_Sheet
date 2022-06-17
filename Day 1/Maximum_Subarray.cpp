// Leetcode : https://leetcode.com/problems/maximum-subarray/
// Coding Ninja : https://www.codingninjas.com/codestudio/problems/630526?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website

class Solution
{

public:
    int maxSubArray(vector<int> &nums)
    {

        if (nums.size() == 1)
            return nums[0];

        int ans = INT_MIN, sum = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            ans = max(sum, ans);
            if (sum < 0)
                sum = 0;
        }

        return ans;
    }
};