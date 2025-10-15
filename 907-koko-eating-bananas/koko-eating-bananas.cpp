class Solution {
public:
    int maxhour(vector<int>& piles) {
        int maxi = INT_MIN;
        for (int x : piles) maxi = max(maxi, x);
        return maxi;
    }

    long long calculatetotalhour(vector<int>& piles, int h) {
        long long totalhour = 0;
        for (int x : piles) {
            totalhour += (long long)(x + h - 1) / h; // safe integer ceiling
        }
        return totalhour;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = maxhour(piles);
        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long totalh = calculatetotalhour(piles, mid);

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
