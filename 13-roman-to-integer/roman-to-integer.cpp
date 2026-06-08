class Solution {
public:
    int romanToInt(string s) {
        int n = s.size();
        int sum = 0;

        unordered_map<char,int> p;
        p['I'] = 1;
        p['V'] = 5;
        p['X'] = 10;
        p['L'] = 50;
        p['C'] = 100;
        p['D'] = 500;
        p['M'] = 1000;

        for (int i = 0; i < n; i++) {
            if (i < n - 1 && p[s[i + 1]] > p[s[i]]) {
                sum += p[s[i + 1]] - p[s[i]];
                i++;
            } else {
                sum += p[s[i]];
            }
        }

        return sum;
    }
};