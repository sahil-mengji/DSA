class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size(), a=0 ,b=n-1 ,c=0;
        while(c<=b){
            if(nums[c]==0) swap( nums[a++] , nums[c++] );
            else if(nums[c]==2) swap(nums[c] , nums[b--]);  
            else c++;
      } 
    }
};