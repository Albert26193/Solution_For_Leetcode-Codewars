/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */

// @lc code=start
class Solution {
  public:
    bool isPalindrome(int x)
    {
        if (x < 0) {
            return false;
        }

        long long new_num    = 0;
        long long origin_num = x;

        while (x > 0) {
            new_num = 10 * new_num + x % 10;
            x       = x / 10;
        }

        if (new_num == origin_num) {
            return true;
        }
        return false;
    }
};
// @lc code=end
