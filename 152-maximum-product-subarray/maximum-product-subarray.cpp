class Solution {
public:
    int ans = INT_MIN;

    void rec(vector<int>& nums, int index, int currMax, int currMin) {
        if (index >= nums.size()) return;

        int num = nums[index];

        if (num == 0) {
            ans = max(ans, 0);
            rec(nums, index + 1, 1, 1);
        } else {
            int newMax = max({num, currMax * num, currMin * num});
            int newMin = min({num, currMax * num, currMin * num});
            ans = max(ans, newMax);
            rec(nums, index + 1, newMax, newMin);
        }
    }

    int maxProduct(vector<int>& nums) {
        ans = nums[0];
        rec(nums, 1, nums[0], nums[0]); 
        return ans;
    }
};
