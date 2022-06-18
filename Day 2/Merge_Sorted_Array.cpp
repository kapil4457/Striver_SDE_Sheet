// Leetcode : https://leetcode.com/problems/merge-sorted-array/
// Coding Ninja : https://www.codingninjas.com/codestudio/problems/1214628?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int ptr = 0;

        for (int i = m; i < m + n; i++)
        {
            nums1[i] = nums2[ptr];
            ptr++;
        }

        sort(nums1.begin(), nums1.end());
    }
};