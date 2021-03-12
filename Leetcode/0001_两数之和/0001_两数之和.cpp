/*
 * @lc app=leetcode.cn id= lang=cpp
 *
 * [] 两数之和
 */

// @lc code=start
// Update: 2021-01-27
class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
            return {};
        }
    };
