class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int len=0,track=k;
        int maxi=0;
        int j=0;
        for(int i =0 ;i<nums.size();i++){
           
            if(nums[i]!=1) track--;
            len++;

            while(track<0) {
                if(nums[j]==0) track++;
                j++;
                len--;
            }
            maxi=max(maxi,i-j+1);

        }

        return maxi;
    }
};