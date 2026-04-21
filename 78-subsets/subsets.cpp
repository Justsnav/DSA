class Solution {
public:
    void helper(vector<int>& nums, vector<int>& ans, int i,vector<vector<int>>& allsubsets){
        if(i == nums.size()){
            allsubsets.push_back({ans});
            return;
        }
        ans.push_back(nums[i]);
        helper(nums,ans,i+1,allsubsets);

        ans.pop_back();
        helper(nums,ans,i+1,allsubsets);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>> allsubsets;

        helper(nums,ans,0,allsubsets);
        return allsubsets;
    }
};