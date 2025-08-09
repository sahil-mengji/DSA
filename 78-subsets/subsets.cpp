class Solution {
private:
    void gen(vector<vector<int>>& res, vector<int> cur, vector<int>& ref, int i, int n) {
        if (i == n) {
            res.push_back(cur);
            return;
        }

      
        cur.push_back(ref[i]);
        gen(res, cur, ref, i + 1, n);


        cur.pop_back(); 
        gen(res, cur, ref, i + 1, n);
    }

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> cur;
        
        int n = nums.size();
        gen(res, cur, nums, 0, n);
        return res;
    }
};
