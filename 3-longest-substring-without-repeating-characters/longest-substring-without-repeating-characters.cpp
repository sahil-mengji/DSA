class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        



        int n=s.size();
        int i=0;
        int j=0;

        int maxi=0;
        int len=0;


        unordered_map<char,int> m;

        while(j<n){
            
            if(m.find(s[j]) != m.end()) {
                m.erase(s[i++]);
                continue;
            }
            maxi=max(maxi,j-i+1);
            m[s[j]]=1;
            j++;    
        }

    return maxi;

    }

};