class Solution {
public:
    bool check(vector<int>& nums) {
        int j =0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>nums[(i+1)%n]){
                j++;
                if(j==2){
                    break;
                }
            }

        }

        return j==2 ? false:true;


    }
};