class Solution {
public:
    void getper(vector<int>& nums, int idx, vector<vector<int>>& ans){
        if(idx == nums.size()){
            ans.push_back(nums);
        }
        for(int i=idx;i<nums.size();i++){
            swap(nums[i],nums[idx]);
            getper(nums,idx+1,ans);
            swap(nums[idx],nums[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        getper(nums,0,ans);
        sort(ans.begin(),ans.end());
        ans.erase(unique(ans.begin(),ans.end()),ans.end());
        return ans;   
    }
};