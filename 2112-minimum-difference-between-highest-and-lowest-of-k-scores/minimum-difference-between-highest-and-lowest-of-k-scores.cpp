class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n= nums.size();
        int maxdiff = INT_MAX;
        sort(nums.begin(),nums.end());

        int i = 0;
        int j = k-1;
        while(j<n){
            int minel = nums[i];
            int maxel = nums[j];

            maxdiff = min(maxdiff,maxel- minel);
            i++;
            j++;
        }
        return maxdiff;
    }
};