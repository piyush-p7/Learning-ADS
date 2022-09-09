// 442. Find All Duplicates in an Array
// Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or twice, return an array of all the integers that appears twice.
// You must write an algorithm that runs in O(n) time and uses only constant extra space.
// Example 1:
// Input: nums = [4,3,2,7,8,2,3,1]
// Output: [2,3]

// Example 2:
// Input: nums = [1,1,2]
// Output: [1]
code below:
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector <int> ans;
        int size = nums.size();
        int number = 0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<size-1;i++){
            for(int j=i+1;j<size;j++){
                if(nums[i]==nums[j]){
                    number = nums[i];
                }
                else{
                    break;
                }
                ans.push_back(number);
            }
        }
        return ans;
    }
};