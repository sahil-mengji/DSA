class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int maxi = 0;
        
        unordered_map<char, int> lastIndex;
        int i = 0;

        for (int j = 0; j < n; j++) {
            if (lastIndex.find(s[j]) != lastIndex.end()) {
              
                i = max(i, lastIndex[s[j]] + 1);
            }
            lastIndex[s[j]] = j;
            maxi = max(maxi, j - i + 1);
        }

        return maxi;
    }
};
