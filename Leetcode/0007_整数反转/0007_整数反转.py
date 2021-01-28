#
# @lc app=leetcode.cn id=7 lang=python3
#
# [7] 整数反转
#

# @lc code=start
class Solution:
    def reverse(self, x: int) -> int:
        int_max = pow(2,31) - 1
        int_min = -int_max - 1
        final = 0
        flag = 0

        if x < 0:
            flag = 1

        if (x >= int_max)|(x <= int_min):
            return 0

        if x < 0:
            x = -x
        else:
            x = x

        while x > 0:
            final = int((final*10) +(x%10))
            x = int(x/10)

        if flag == 1:
            final = final * (-1)

        if(final >= int_max)|(final <= int_min):
            return 0
        else:
            return final
# @lc code=end

