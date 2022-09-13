// Largest Sum Contiguous subarray (Kadane's Algorithm)

// Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number) which has the maximum sum and return its sum.

// Example 1:
// Input:
// N = 5
// Arr[] = {1,2,3,-2,5}
// Output:
// 9
// Explanation:
// Max subarray sum is 9
// of elements (1, 2, 3, -2, 5) which 
// is a contiguous subarray.

Code below:
class Solution {
public:
    bool checkSubarraySum(int arr[], int k) {
        int realMax = INT_MIN;
        int curMax = 0;
        int size = k;
        
        for(int i = 0;i<size;i++){
            curMax = curMax + arr[i];
            
            if(realMax<curMax){
                realMax = curMax;
            }
            
            if(curMax < 0){
                curMax = 0;
            }
        }
        return realMax;
    }
};