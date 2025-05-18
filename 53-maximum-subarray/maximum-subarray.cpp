class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,max=INT_MIN;


        for(auto c : nums){
            sum+=c ;
            if(sum>=max){
                max=sum;
            }
            if(sum<0){
                sum=0;
            }

        }
        return max;
    }
};