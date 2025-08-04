class Solution {
public:
    string reverseWords(string s) {
        string res;
        string word;
        int i=s.size()-1;
        while(i>=0){

            while(i >= 0 && s[i]==' ') i--;

            if(i<0) break;

            int j=i;
            while(j>=0 && s[j]!=' ') j--;

            word = s.substr(j+1,i-j);

            if (!res.empty()) res += ' ';
            res+=word;

            i=j-1;

        }
 
        return res;
    }
};