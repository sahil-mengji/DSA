class Solution {
public:
    int strStr(string haystack, string needle) {
        

        int hl=haystack.size() ,nl=needle.size();
        int len=0;
        for(int i=0;i<hl;i++){
            if(haystack[i]==needle[len]){
                len++;
            }
            else{
                i=i-len;
                len=0;
            }
            if(len==nl){
                return i- len+1 ;
                
            }
        }

        return -1;

    }
};