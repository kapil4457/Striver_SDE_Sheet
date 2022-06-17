// LeetCode  :https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// Code Studio  :  https://www.codingninjas.com/codestudio/problems/893405?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {

        // O(n) Solution
        int prev = prices[0];
        int maximize = INT_MIN;
        for (int i = 0; i < prices.size(); i++)
        {
            maximize = max(maximize, prices[i] - prev);
            prev = min(prev, prices[i]);
        }
        if (maximize < 0)
        {
            return 0;
        }
        return maximize;

        // Brute Force Approach

        //  int maximum = INT_MIN;
        // for(int i = 0 ;i<prices.size();i++){
        //     for(int j = i ; j < prices.size();j++){
        //         maximum = max((prices[j]-prices[i]) , maximum);
        //     }
        // }
        // return maximum;
    }
};