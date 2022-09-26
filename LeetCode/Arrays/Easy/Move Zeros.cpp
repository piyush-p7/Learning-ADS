// 283. Move Zeroes
// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
// Note that you must do this in-place without making a copy of the array.

// Example 1:
// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]
Code below:
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        const int N = nums.size();
        
        int zeroes = 0;
        for (int i = 0; i < N; i++)
            if (!nums[i]) zeroes++;
        
        if (!zeroes) return;
        
        int p = 0;
        
        for (int i = 0; i < N; ++i)
            if (nums[i]) nums[p++] = nums[i];
        
        for (int i = p; i < N; i++)
            nums[i] = 0;
    }
};