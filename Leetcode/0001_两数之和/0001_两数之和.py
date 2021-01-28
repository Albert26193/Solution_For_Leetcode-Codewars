#
# @lc app=leetcode.cn id=1 lang=python3
#
# [1] 两数之和
#

# @lc code=start
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        length = len(nums)
        j = -1
        k = 0
        i = 0
        flag = 0

        for i in range(length):
            # 如果找到的是自己，那么就continue
            if(target - nums[i] == nums[i]) & (nums.count(target -nums[i]) == 1):
                continue
            else:
                # 如果index没有找到，那么会抛出异常，所有需要增加一个flag
                for k in range(i+1,length):
                    if nums[i] + nums[k] == target:
                        j = nums.index(target - nums[i],i+1)
                        flag = 1
                        break

                if flag == 1:
                    break

        if j>0:
            return [i,j]
        else:
            return []

