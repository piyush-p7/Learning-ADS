// 1. Two Sum
// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.

// Example 1:
// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
code below:
class Solution {
    public int[] twoSum(int[] nums, int target) {
        int front = 0, back = nums.length - 1, sum = 0;
        while (front <= back) {
            int frontI = 0, backI = nums.length - 1;
            while (frontI <= backI) {
                if (backI != frontI) {
                    sum = nums[backI] + nums[frontI];
                    if (sum == target) {
                        return new int[]{backI, frontI};
                    }
                }
                if (frontI != front) {
                    sum = nums[front] + nums[frontI];
                    if (sum == target) {
                        return new int[]{front, frontI};
                    }
                }
                if (front != backI) {
                    sum = nums[front] + nums[backI];
                    if (sum == target) {
                        return new int[]{front, backI};
                    }
                }
                if (back != frontI) {
                    sum = nums[back] + nums[frontI];
                    if (sum == target) {
                        return new int[]{back, frontI};
                    }
                }
                if (back != backI) {
                    sum = nums[back] + nums[backI];
                    if (sum == target) {
                        return new int[]{back, backI};
                    }
                }

                frontI++;
                backI--;
            }
            front++;
            back--;
        }
        return null;
    }
}