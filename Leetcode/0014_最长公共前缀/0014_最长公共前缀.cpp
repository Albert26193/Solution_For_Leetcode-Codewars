/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 */

// @lc code=start
class Solution {
   public:
    string compare_prefix(string s1, string s2) {
        int index = 0;
        int length = 0;
        int i = 0;

        length = min(s1.size(), s2.size());
        for (i = 0; i < length; i++) {
            if (s1[i] == s2[i]) {
                index++;
            } else {
                break;
            }
        }

        if (index > 0) {
            return s1.substr(0, index);
        } else {
            return "";
        }
    }

    string longestCommonPrefix(vector<string>& strs) {
        int i = 0;
        int count_str = strs.size();
        string prefix = strs[0];

        if (strs.size() == 0) {
            return "";
        }
        for (i = 1; i < count_str; i++) {
            prefix = compare_prefix(prefix, strs[i]);
            if (prefix.size() == 0) {
                break;
            }
        }

        return prefix;
    }
};
// @lc code=end
