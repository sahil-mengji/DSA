class Solution {
public:
    string processStr(string s) {
        string res="";

        for(auto a:s){
            if(islower(a)) res.push_back(a);
            if(a=='*' && res.size()!=0) res.pop_back();
            if(a=='#') res=res+res;
            if(a=='%') reverse(res.begin(),res.end());
        }
return res;
    }
};