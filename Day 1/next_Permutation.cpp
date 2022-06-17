// Leetcode : https://leetcode.com/problems/next-permutation/
// Coding Ninja : https://www.codingninjas.com/codestudio/problems/893046?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1
class Solution
{
public:
    void nextPermutation(vector<int> &arr)
    {
        int n = arr.size();
        int idx1 = -1;

        // finding index

        for (int i = n - 2; i >= 0; i--)
        {
            if (arr[i] < arr[i + 1])
            {
                idx1 = i;
                break;
            }
        }
        // finding index so far to
        if (idx1 >= 0)
        {
            int idx2 = -1;
            for (int i = n - 1; i >= 0; i--)
            {
                if (arr[i] > arr[idx1])
                {
                    idx2 = i;
                    break;
                }
            }
            // swap
            swap(arr[idx1], arr[idx2]);
        }
        // sort
        reverse(arr.begin() + idx1 + 1, arr.end());
    }
};