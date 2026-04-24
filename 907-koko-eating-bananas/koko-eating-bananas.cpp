class Solution {
public:
    int maxHour(vector<int>& piles) {
        int maximum = INT_MAX;
        for (int x : piles) {
            maximum = max(maximum, x);
        }
        return maximum;
    }
    long long calculateHour(vector<int>& piles, int h) {
        long long totalHour = 0;
        for (int x : piles) {
            totalHour += (long long)(x + h - 1) / h;
        }
        return totalHour;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = maxHour(piles);
        int ans = high;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long totalh = calculateHour(piles, mid);
            if (totalh <= h) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};