class Solution {
public:
    bool canShip(vector<int>& weights, int days, int capacity) {
        int dayCount = 1;
        int currentLoad = 0;

        for (int w : weights) {
            if (currentLoad + w > capacity) {
                dayCount++;
                currentLoad = 0;
            }
            currentLoad += w;
        }

        return dayCount <= days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int left = *max_element(weights.begin(), weights.end());  
        int right = accumulate(weights.begin(), weights.end(), 0); 
        int result = right;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (canShip(weights, days, mid)) {
                result = mid;
                right = mid - 1; 
            } else {
                left = mid + 1; 
            }
        }

        return result;
    }
};

