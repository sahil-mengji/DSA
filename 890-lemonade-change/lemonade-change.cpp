class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0,ten=0;

        for(auto a:bills){
            if(a==5) five++;
            if(a==10) {
                if(five>=1){
                    ten++;
                    five--;
                }
                else{
                    return false;
                }
            }
            
            if(a==20) {
                if(ten>=1&&five>=1){
                    ten--;
                    five--;
                }
                else if(five>=3){
                    five=five-3;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};