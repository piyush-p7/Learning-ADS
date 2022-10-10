// 48. Rotate Image
// You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

// You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. 
// DO NOT allocate another 2D matrix and do the rotation.
// Example 1:

// Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
// Output: [[7,4,1],[8,5,2],[9,6,3]]
Code Below:
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int left = 0;
        int right = matrix.size()-1;
        while(left<right){
            for(int i=0;i<right-left;i++){
                int top = left;
                int bottom = right;
                
                //saving the top-Left value in temp variable (topLeft)
                int topLeft = matrix[top][left+i];
                
                //saving the bottom-Left in the top-left
                matrix[top][left+i] = matrix[bottom-i][left];
                
                //saving the bottom-right in bottom-left
                matrix[bottom-i][left] = matrix[bottom][right-i];
                
                //saving the top-right in bottom-left
                matrix[bottom][right-i] = matrix[top+i][right];
                
                //saving the top-left into the top-right
                matrix[top+i][right] = topLeft;
            }
            --right;
            ++left;
        }
    }
};