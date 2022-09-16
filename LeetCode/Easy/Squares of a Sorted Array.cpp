// 977. Squares of a Sorted Array
// Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

// Example 1:
// Input: nums = [-4,-1,0,3,10]
// Output: [0,1,9,16,100]
// Explanation: After squaring, the array becomes [16,1,0,9,100].
// After sorting, it becomes [0,1,9,16,100].
code below:
class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
        int size = arr.size();
        vector<int> Re_arr(size);
        int left = 0;
        int right = arr.size() - 1;
        for(int i = size-1;i >= 0;i--){
            int Leftsq = arr[left]*arr[left];
            int Rightsq = arr[right]*arr[right];
            if(Leftsq<=Rightsq){
                Re_arr[i] = Rightsq;
                --right;
            }
            else{
                Re_arr[i] = Leftsq;
                left++;
            }
        }
        return Re_arr;
    }
};