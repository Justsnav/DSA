class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result(nums.size());
        int left = 0;
        int right = nums.size()-1;
        int index = nums.size()-1;
        while(left<=right){
            if(abs(nums[left])>abs(nums[right])){
                result[index--]=nums[left]*nums[left];
                left++;
            }else{
                result[index--]=nums[right]*nums[right];
                right--;
            }
        }
        return result;
    }
};