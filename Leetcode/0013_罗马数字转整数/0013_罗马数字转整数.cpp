/*
 * @lc app=leetcode.cn id=13 lang=cpp
 *
 * [13] 罗马数字转整数
 */

// @lc code=start
class Solution {
  public:
    int romanToInt(string s)
    {
        int i      = 0;
        int value  = 0;
        int length = s.size();
        while (1) {
            if (s[i] == 'I') {
                if (s[i + 1] == 'V') {
                    value += 4;
                    i += 2;
                }
                else if (s[i + 1] == 'X') {
                    value += 9;
                    i += 2;
                }
                else {
                    value += 1;
                    i += 1;
                }
            }
            else if (s[i] == 'V') {
                value += 5;
                i += 1;
            }
            else if (s[i] == 'X') {
                if (s[i + 1] == 'L') {
                    value += 40;
                    i += 2;
                }
                else if (s[i + 1] == 'C') {
                    value += 90;
                    i += 2;
                }
                else {
                    value += 10;
                    i += 1;
                }
            }
            else if (s[i] == 'L') {
                value += 50;
                i += 1;
            }
            else if (s[i] == 'C') {
                if (s[i + 1] == 'D') {
                    value += 400;
                    i += 2;
                }
                else if (s[i + 1] == 'M') {
                    value += 900;
                    i += 2;
                }
                else {
                    value += 100;
                    i += 1;
                }
            }
            else if (s[i] == 'D') {
                value += 500;
                i += 1;
            }
            else if (s[i] == 'M') {
                value += 1000;
                i += 1;
            }

            if (i >= length) {
                break;
            }
        }
        return value;
    }
};
// @lc code=end
