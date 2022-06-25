// https://practice.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1

class Solution
{
public:
    int maxLen(vector<int> &A, int n)
    {
        unordered_map<int, int> presum;

        int sum = 0;
        int max_len = 0;

        // Traverse through the given array
        for (int i = 0; i < n; i++)
        {
            // Add current element to sum
            sum += A[i];

            if (A[i] == 0 && max_len == 0)
                max_len = 1;
            if (sum == 0)
                max_len = i + 1;

            // Look for this sum in Hash table
            if (presum.find(sum) != presum.end())
            {
                // If this sum is seen before, then update max_len
                max_len = max(max_len, i - presum[sum]);
            }
            else
            {
                // Else insert this sum with index in hash table
                presum[sum] = i;
            }
        }

        return max_len;
    }
};
