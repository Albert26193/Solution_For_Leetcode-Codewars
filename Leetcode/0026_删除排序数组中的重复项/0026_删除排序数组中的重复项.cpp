/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除排序数组中的重复项
 */
#include <vector>

// @lc code=start
class Solution {
   public:
    //快慢指针法
    int removeDuplicates(vector<int>& nums) {
        int slow = 0;
        int fast = 0;

        if (nums.size() == 0) {
            return 0;
        }
        if (nums.size() == 1) {
            return 1;
        }

        while (1) {
            fast++;
            if (fast == nums.size()) {
                break;
            }
            if (nums[fast] != nums[slow]) {
                slow++;
                nums[slow] = nums[fast];
            }
        }

        return slow + 1;
    }
};
// @lc code=end
