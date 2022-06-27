// LeetCode  :https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        auto ip = unique(nums.begin(), nums.begin() + nums.size());
        nums.resize(std::distance(nums.begin(), ip));

        return nums.size();
    }
};