class Solution {
private:
    int cal(vector<int>& nums, int i, vector<int>& dp) {
        if (i == nums.size() - 1) return 0;
        if (i >= nums.size()) return INT_MAX;
        if (dp[i] != -1) return dp[i];
        int mini = INT_MAX;
        for (int j = 1; j <= nums[i]; j++) {
            int next = cal(nums, i + j, dp);
            if (next != INT_MAX) mini = min(mini, next + 1);
        }
        return dp[i] = mini;
    }
public:
    int jump(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        return cal(nums, 0, dp);
    }
};
