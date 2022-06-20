// LeetCode : https://leetcode.com/problems/majority-element-ii/
// Coding Ninja  : https://www.codingninjas.com/codestudio/problems/893027?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        vector<int> numbers;

        for (int i = 0; i < nums.size(); i++)
        {
            if (count(numbers.begin(), numbers.end(), nums[i]) != 0)
            {
                continue;
            }
            int counts = count(nums.begin(), nums.end(), nums[i]);
            if (counts > (nums.size() / 3))
            {

                numbers.push_back(nums[i]);
            }
        }

        return numbers;
    }
};