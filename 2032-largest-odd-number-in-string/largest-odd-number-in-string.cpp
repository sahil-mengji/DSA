class Solution {
public:
    string largestOddNumber(string num) {
        string res;
        int n=num.size();
        int i=n-1;

        set <char> s= {'1','3','5','7','9'};

        while(i>=0){
            if(s.find(num[i])!=s.end()) break;
            i--;
        }

      if(i>=0) res = num.substr(0,i+1);

      return res;
    }
};