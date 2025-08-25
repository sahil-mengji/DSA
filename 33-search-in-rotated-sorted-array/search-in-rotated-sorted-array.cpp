class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0, right = n - 1;

      
        while (left < right) {
            int mid = (left + right) / 2;
            if (nums[mid] > nums[right]) {
                left = mid + 1; 
            } else {
                right = mid;    
            }
        }
        int pivot = left;

     
        left = 0, right = n - 1;
        while (left <= right) {
            int mid = (left + right) / 2;
            int realMid = (mid + pivot) % n; 

            if (nums[realMid] == target) return realMid;
            if (nums[realMid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return -1;
    }
};
