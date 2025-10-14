class Solution {
public:
    int findMin(vector<int>& nums) {
        int small =nums[0];
        for(int i=0;i<nums.size();i++){
            small = min(small,nums[i]);
        }
        return small;
    }
};