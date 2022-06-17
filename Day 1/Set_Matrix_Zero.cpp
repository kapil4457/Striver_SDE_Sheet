// Leetcode : https://leetcode.com/problems/set-matrix-zeroes/
// Code Ninja : https://www.codingninjas.com/codestudio/problems/set-matrix-zeros_3846774?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website

class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        unordered_set<int> row, col;
        int m = matrix.size();
        int n = m > 0 ? matrix[0].size() : 0;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] == 0)
                {
                    row.insert(i);
                    col.insert(j);
                }
            }
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (row.find(i) != row.end() || col.find(j) != col.end())
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};