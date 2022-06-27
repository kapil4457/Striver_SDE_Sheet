// LeetCode :  https: // leetcode.com/problems/trapping-rain-water/
// Code Studio   :https://www.codingninjas.com/codestudio/problems/630519?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0
class Solution
{
public:
    int trap(vector<int> &h)

    {
        if (!h.size())
            return 0;
        int i = 0, j = h.size() - 1, maxLeft = h[i], maxRight = h[j], res = 0, e;
        while (i <= j)
        {
            if (h[i] > h[j])
            {
                e = h[j];
                if (e > maxRight)
                    maxRight = e;
                else
                    res += maxRight - e;
                j--;
            }
            else
            {
                e = h[i];
                if (e > maxLeft)
                    maxLeft = e;
                else
                    res += maxLeft - e;
                i++;
            }
        }
        return res;
    }
};