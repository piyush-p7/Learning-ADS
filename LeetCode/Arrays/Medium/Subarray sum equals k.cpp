// 560. Subarray Sum Equals K
// Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.
// A subarray is a contiguous non-empty sequence of elements within an array.

// Example 1:
// Input: nums = [1,1,1], k = 2
// Output: 2
code below:
class Solution {
public:
    int subarraySum(vector<int>&  nums, int k) {
        int sum = 0;
        int count = 0;
        unordered_map<int,int> m;
        int size = nums.size();
        for(int i=0;i<size;i++){
            sum += nums[i];
            if(sum==k) count++;
            if(m.find(sum-k)!=m.end()) count += m[sum-k];
            if(m.find(sum)!=m.end()) m[sum]++;
            else m[sum]=1;
        }
        return count;
    }
};