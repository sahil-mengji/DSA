class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        int n = words.size();
        int i = 1;

        while (i < n) {
            string a = words[i - 1];
            string b = words[i];

            sort(a.begin(), a.end());
            sort(b.begin(), b.end());

            if (a == b) {
                words.erase(words.begin() + i);
                n--;
            } else {
                i++;
            }
        }

        return words;
    }
};