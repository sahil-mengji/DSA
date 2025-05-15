class Solution {
public:
    bool isPalindrome(string s) {
        string b = "";
        for (char a : s) {
            if (isalnum(a)) { 
                b.push_back(tolower(a)); 
            }
        }
        return check(b, 0, b.size() - 1);
    }

private:
    bool check(const string& s, int st, int en) {
        if (st >= en) return true; 
        if (s[st] != s[en]) return false;
        return check(s, st + 1, en - 1);
    }
};
