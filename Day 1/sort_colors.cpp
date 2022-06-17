// LeetCode : https://leetcode.com/problems/sort-colors/
// Coding Ninja  : https://www.codingninjas.com/codestudio/problems/631055?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website

#include <bits/stdc++.h>
using namespace std;
void sortColors(vector<int> &nums)
{
    // This is the liberty sort function..
    //  sort(nums.begin() , nums.end());

    // Without liberty function
    stack<int> s1;
    int len = nums.size();
    int num = 0;
    while (num < 3)
    {
        for (auto ele : nums)
        {
            if (ele == num)
            {
                s1.push(ele);
            }
        }
        num++;
    }

    nums.clear();
    for (int i = 0; i < len; i++)
    {
        int j = s1.top();
        nums.push_back(j);
        s1.pop();
    }
}
int main()
{
    vector<int> s1 = {2, 0, 2, 1, 1, 0};
    sortColors(s1);
    for (int i = 0; i < s1.size(); i++)
    {
        cout << s1[i] << " ";
    }

    return 0;
}