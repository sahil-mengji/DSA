class Solution {
public:
    int beautySum(string s) {
        int totalBeauty = 0;
        int n = s.size();

        for (int i = 0; i < n; ++i) {
            array<int, 26> freq = {0};

            for (int j = i; j < n; ++j) {
                freq[s[j] - 'a']++;

                int maxFreq = *max_element(freq.begin(), freq.end());
                int minFreq = *min_element(freq.begin(), freq.end(), [](int a, int b) {
                    if (a == 0) return false;
                    if (b == 0) return true;
                    return a < b;
                });

                totalBeauty += maxFreq - minFreq;
            }
        }

        return totalBeauty;
    }
};
