// Coding Ninja : https://www.codingninjas.com/codestudio/problems/980531?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0
//  LeetCode : https://leetcode.com/problems/search-a-2d-matrix/

#include <bits/stdc++.h>
using namespace std;

// Time Complexity  :O(m*n)
bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int i = 0;
    int j = 0;

    while (i < matrix.size() && j < matrix[0].size())
    {

        if (matrix[i][j] == target)
        {
            return true;
        }
        if (matrix[i][j] > target && matrix[i][0] <= target)
        {
            j--;
            continue;
        }

        if (matrix[i][j] < target && matrix[i][matrix[0].size() - 1] >= target)
        {
            j++;
            continue;
        }

        if (matrix[i][matrix[0].size()] <= target)
        {
            i++;
            continue;
        }
        if (matrix[i][0] >= target)
        {
            i--;
            continue;
        }
    }

    return false;
}

// Time Complexity  : O(n)
bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int rows = matrix.size(),
        cols = matrix[0].size(),
        row = 0, col = cols - 1;

    while (row < rows && col > -1)
    {
        int cur = matrix[row][col];
        if (cur == target)
            return true;
        if (target > cur)
            row++;
        else
            col--;
    }

    return false;
}

int main()
{
    vector<vector<int>> run = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};

    int target = 60;
    cout << searchMatrix(run, target);

    return 0;
}