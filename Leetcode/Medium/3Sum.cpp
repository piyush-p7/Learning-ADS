// 15. 3Sum
// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
// Notice that the solution set must not contain duplicate triplets.

// Example 1:
// Input: nums = [-1,0,1,2,-1,-4]
// Output: [[-1,-1,2],[-1,0,1]]
// Explanation: 
// nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
// nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
// nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
// The distinct triplets are [-1,0,1] and [-1,-1,2].
// Notice that the order of the output and the order of the triplets does not matter.
code below:

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> answer;
        sort(nums.begin(), nums.end());
        
        if((nums.front() == 0) && (nums.back() == 0))
        {
            answer.push_back({0, 0, 0});
            
            return answer; 
        }
        
        for(int i = 0; i < nums.size() - 2; i++)
        {
            if((i > 0) && (nums[i] == nums[i-1]))
            {
                continue;
            }
            
            int j = i + 1;
            int k = nums.size() - 1;
            
            while(j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if(sum < 0)
                {
                    j++;
                }
                else if(sum > 0)
                {
                    k--;
                }
                else if(sum == 0)
                {
                    answer.push_back({nums[i], nums[j], nums[k]});
                    while((j < k) && (nums[j] == nums[j+1]))
                    {
                        j++;
                    }
                    j++;
                    
                    while((j < k) && (nums[k] == nums[k-1]))
                    {
                        k--;
                    }
                    k--;
                }
            }
        }
        
        return answer;
    }
};