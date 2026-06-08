class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top=0,left=0,bottom=matrix.size()-1,right=matrix[0].size()-1;

        int lr=1,  tb=0;
        vector<int> a;
        while(left<=right && top<=bottom){

            if(lr==1){
                for(int i=left;i<=right;i++){
                    a.push_back(matrix[top][i]);
                }
                top++;
                lr=0;
                tb=1;
            }
             if(lr==2){
                for(int i=right;i>=left;i--){
                    a.push_back(matrix[bottom][i]);
                }
                bottom--;
                lr=0;
                tb=2;
            }
             if(tb==1){
                for(int i=top;i<=bottom;i++){
                    a.push_back(matrix[i][right]);
                }
                right--;
                lr=2;
                tb=0;
            }
             if(tb==2){
                for(int i=bottom;i>=top;i--){
                    a.push_back(matrix[i][left]);
                }
                left++;
                lr=1;
                tb=0;
            }
        }
        return a;
    }
};