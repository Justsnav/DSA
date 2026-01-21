class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
      int j =nums.size()-1;
      int left =0;
      int right =nums.size()-1;
      vector<int>result(nums.size());
      while(left<=right){
        if(abs(nums[left]) > abs(nums[right])){
            result[j--] = nums[left]*nums[left];
            left++;
        }else{
            result[j--] = nums[right]*nums[right];
            right--;
        }
      }
      
      return result;
    }
};