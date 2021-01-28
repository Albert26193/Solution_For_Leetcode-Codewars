/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

#include <string.h>

// @lc code=start
class Solution {
  public:
    char get_pairs(char ch)
    {
        if (ch == ')') {
            return '(';
        }
        else if (ch == ']') {
            return '[';
        }
        else if (ch == '}') {
            return '{';
        }
        else {
            return 0;
        }
    }

    bool isValid(string s)
    {
        int pointer_top = 0;
        int receive_s[10001];
        int i = 0;

        if (s.size() < 1 || s.size() > 10000 || s.size() % 2 != 0) {
            return false;
        }

        while (1) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                receive_s[pointer_top] = s[i];
                pointer_top++;
            }

            //检查receive_s stack结构
            else if (s[i] == ')' || s[i] == '}' || s[i] == ']') {
                if (pointer_top <= 0) {
                    return false;
                }
                if (receive_s[pointer_top - 1] != get_pairs(s[i])) {
                    return false;
                }
                else {
                    pointer_top--;
                }
            }

            i++;
            if (i >= s.size()) {
                break;
            }
        }

        if (pointer_top == 0) {
            return true;
        }
        else {
            return false;
        }
    }
};
// @lc code=end
