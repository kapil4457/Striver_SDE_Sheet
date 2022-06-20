// LeetCode : https://leetcode.com/problems/majority-element/
// Coding Ninja :

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {

        int maxCount = 0;
        int ele = nums[0];
        vector<int> numbers;

        for (int i = 0; i < nums.size(); i++)
        {
            if (count(numbers.begin(), numbers.end(), nums[i]) != 0)
            {
                continue;
            }
            int counts = count(nums.begin(), nums.end(), nums[i]);
            if (counts > maxCount)
            {
                maxCount = counts;
                ele = nums[i];
                numbers.push_back(nums[i]);
            }
        }

        return ele;
    }
};