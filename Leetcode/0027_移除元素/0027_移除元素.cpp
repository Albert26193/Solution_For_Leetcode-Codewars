/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */
#include <vector>

//BUG
// @lc code=start
class Solution {
   public:
    /*
    int exchange_num(int &a, int &b) {
        int t = 0;
        t = a;
        a = b;
        b = t;
        return 0;
    }

    int removeElement(vector<int> &nums, int val) {
        if (val < 0 || val > 100) {
            return false;
        }

        if (nums.size() < 0 || nums.size() > 100) {
            return false;
        }

        int slow = 0;
        int fast = 0;

        while (1) {
            if (fast == nums.size()) {
                break;
            }

            if (nums[fast] == val) {
                slow = fast;
                if (fast == nums.size()) {
                    break;
                }
                while (nums[fast] == val && fast < nums.size()) {
                    fast++;
                }

                exchange_num(nums[fast], nums[slow]);
                fast = slow;
            }
            fast++;
        }

        return slow;
    }
    */

    //上面的办法是可行的，但是官方的双指针更加优雅
    int removeElement(vector<int> &nums, int val) {
        int slow = 0;
        int fast = 0;
        for (fast = 0; fast < nums.size(); fast++) {
            if (nums[fast] != val){
                nums[slow] = nums[fast];
                slow ++;
            }
        }

        return slow;
    }
};

// @lc code=end
