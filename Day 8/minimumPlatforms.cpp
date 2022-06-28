// GFG :  https://practice.geeksforgeeks.org/problems/minimum-platforms-1587115620/1#

class Solution
{
public:
    // Function to find the minimum number of platforms required at the
    // railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
        // Your code here
        sort(arr + 0, arr + n);
        sort(dep + 0, dep + n);

        int i = 0, j = 0, ans = 0;
        while (i < n)
        {

            while (i < n and arr[i] <= dep[j])
                i++;
            ans = max(ans, i - j);
            while (j < i and dep[j] < arr[i])
                j++;
        }
        return ans;
    }
};
