class Solution {
public:
    void helper(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>>& allsubsets){
        if(i == nums.size()){
            allsubsets.push_back(ans);
            return;
        }
        //include
        ans.push_back(nums[i]);
        helper(nums,ans,i+1,allsubsets);
        ans.pop_back();
        int index = i+1;
        while(index < nums.size() && nums[index] == nums[index-1])index++;
        //exclude
        helper(nums,ans,index,allsubsets);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        vector<vector<int>> allsubsets;
        helper(nums,ans,0,allsubsets);
        return allsubsets;
    }
};