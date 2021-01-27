/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
 */

#include<iostream>
#include<climits>

// @lc code=start
class Solution
{
public:
    int reverse(int x)
    {
        int err_flag = 0;
        long long num_get_x = 0;
        long long num_new_x = 0;
        long long Array_Take_num[15] = {0};
        int i = 0;
        int j = 0;
        int k = 0;
        long long ten = 0;

        if ((x >= INT_MAX) || (x <= INT_MIN))
        {
            err_flag = 1;
        }
        if(x == 0)
            return 0;

        if (err_flag == 1)
            return 0;
        else
            ;

        if (x < 0)
        {
            num_get_x = -x;
        }
        else
        {
            num_get_x = x;
        }

        // while(num_get_x > 0)
        // {
        //     num_new_x = num_get_x%10 + 10*num_new_x;
        //     num_get_x = num_get_x/10;
        // }

        //上面的做法是成立的，但是可以利用一个堆栈结构进行实现
        for (i = 0; i < 14; i++)
        {
            Array_Take_num[i] = -1;
        }
        i = 0;
        while (num_get_x > 0)
        {
            Array_Take_num[i] = num_get_x % 10;
            num_get_x = num_get_x / 10;
            i++;
        }

        for (i = 0; i < 14; i++)
        {
            if (Array_Take_num[i] == -1)
            {
                j = i;
                break;
            }
        }

        num_new_x = Array_Take_num[j - 1];
        ten = 1;

        for (i = j - 2; i >= 0; i--)
        {
            ten = 1;
            for (k = 0; k < j - 1 - i; k++)
            {
                ten = 10 * ten;
            }
            num_new_x = Array_Take_num[i] * ten + num_new_x;
        }

        // 可能翻转之后超过了INT_MAX的数值
        if ((num_new_x >= INT_MAX) || (num_new_x <= INT_MIN))
            return 0;
        if (x < 0)
            return -1 * num_new_x;
        else
        {
            return num_new_x;
        }
    }
};
// @lc code=end
