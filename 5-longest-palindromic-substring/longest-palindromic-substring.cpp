class Solution {
public:
    string longestPalindrome(string s) {
        if (s.empty()) return "";

        string longest = "";

        for (int i = 0; i < s.size(); i++) {
            string odd = expandAroundCenter(s, i, i);       // Odd-length palindromes
            string even = expandAroundCenter(s, i, i + 1);  // Even-length palindromes

            if (odd.length() > longest.length()) {
                longest = odd;
            }
            if (even.length() > longest.length()) {
                longest = even;
            }
        }

        return longest;
    }

    string expandAroundCenter(const string& s, int left, int right) {
        while (left >= 0 && right < s.size() && s[left] == s[right]) {
            left--;
            right++;
        }
        return s.substr(left + 1, right - left - 1);
    }
};
