class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1, right = *max_element(piles.begin(), piles.end());
        int res = right;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            long long hours = 0;
            for (int p : piles) {
                hours += (p + mid - 1) / mid; 
            }

            if (hours <= h) {
                res = mid;     
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return res;
    }
};
