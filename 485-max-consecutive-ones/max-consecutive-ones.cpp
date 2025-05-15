class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max =0 ,c=0;

        for(auto i : nums){
           
            if(i==1){
                c++;
            }
            else{
                c=0;
            }
             if(c>=max){
                max=c;
            }
        }
        return max;
        
    }
};