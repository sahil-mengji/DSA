class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int n=nums.size();
       int maxi=INT_MIN,suf=1,pref=1;
       for(int i=0;i<n;i++){
        if(suf==0) suf=1;
        if(pref==0) pref=1;

        suf=suf*nums[i];
        pref=pref*nums[n-i-1];

        maxi=max(maxi,max(suf,pref));
       }

       return maxi;
    }
};
