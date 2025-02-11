class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0, cumulativeSum = 0;
        unordered_map<int, int> sumFreq;

        sumFreq[0] = 1; 

        for (int i = 0; i < n; i++) {
            cumulativeSum += nums[i];  

           
            if (sumFreq.find(cumulativeSum - k) != sumFreq.end()) {
                count += sumFreq[cumulativeSum - k];
            }

            
            sumFreq[cumulativeSum]++;
        }

        return count;
    }
};
