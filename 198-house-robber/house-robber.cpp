class Solution {
public:
    int rob(vector<int>& nums) {
        
        vector<int> a(nums.size());
        int n=nums.size();
        a[0]=nums[0];
        if(n>=2) a[1]=max(nums[0],nums[1]);
       
        for(int i=2;i<nums.size();i++){
            a[i]=max(nums[i]+a[i-2],a[i-1]);
        }

        return a[nums.size()-1];
        
    }
};