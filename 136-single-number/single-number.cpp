class Solution {
public:
    int singleNumber(vector<int>& nums) {
    int a=0;
    for(auto c:nums){
        a^=c;
    } 

    return a;
    }
};