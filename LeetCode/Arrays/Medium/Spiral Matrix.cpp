// 54. Spiral Matrix
// Given an m x n matrix, return all elements of the matrix in spiral order.

// Example 1:
// Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
// Output: [1,2,3,6,9,8,7,4,5]

Time complexity : O(m*n)
space complexity : O(1)

Code below:
class Solution{
 public:
    vector <int> spiralOrder(vector<vector<int>> &matrix){
        vector<int> ans;

        int right = matrix[0].size()-1;
        int left = 0;
        int top = 0;
        int bottom = matrix.size()-1;

        int path = 0;
        while (left<=right && top<=bottom)
        {
            if (path==0)
            {
                for (int i = left; i <= right; i++)
                {
                    ans.push_back(matrix[top][i]);
                }
                path = 1;
                top++;
            }
            else if (path==1)
            {
                for (int i = top; i <= bottom; i++)
                {
                    ans.push_back(matrix[i][right]);
                }
                path = 2;
                right--;
            }
            else if (path==2)
            {
                for (int i = right; i >= left; i--)
                {
                    ans.push_back(matrix[bottom][i]);
                }
                path = 3;
                bottom--;
            }
            else if (path==3)
            {
                for (int i = bottom; i >= top; i--)
                {
                    ans.push_back(matrix[i][left]);
                }
                path=0;
                left++;
            }
        }
        return ans;
    }
}