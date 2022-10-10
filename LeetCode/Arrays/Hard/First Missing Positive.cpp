// 41. First Missing Positive
// Given an unsorted integer array nums, return the smallest missing positive integer.
// You must implement an algorithm that runs in O(n) time and uses constant extra space.
// Example 1:

// Input: nums = [1,2,0]
// Output: 3
// Explanation: The numbers in the range [1,2] are all in the array.
Code Below:
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            //Checking which number is first missing from 1 to n;
            int element = nums[i];
            if(element>=1 && element <=n){
                int chair = element - 1;
                if(nums[chair]!=element){
                    swap(nums[chair],nums[i]);
                    i--;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=i+1) return i+1;
        }
        return n+1;
    }
};