class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> m(256,0);
        int maxi=0;
        int j=0;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;

            
                 while(m[s[i]]>1){
                    m[s[j++]]--;
                    
                }
            
            maxi=max(maxi,i-j+1);
        }
        return maxi;
    }
};