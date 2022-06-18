//  LeetCode : https://leetcode.com/problems/merge-intervals/
// Coding Ninja  : https://www.codingninjas.com/codestudio/problems/699917?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0
class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> vec;
        vec.push_back(intervals[0]);
        int k = 0;
        for (int i = 1; i < intervals.size(); i++)
        {
            if (vec[k][1] >= intervals[i][0])
            {
                vec[k][1] = intervals[i][1] > vec[k][1] ? intervals[i][1] : vec[k][1];
            }
            else
            {
                k++;
                vec.push_back(intervals[i]);
            }
        }
        return vec;
    }
};