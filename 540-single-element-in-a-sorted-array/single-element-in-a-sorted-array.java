class Solution {
    public int singleNonDuplicate(int[] nums) {
        int n=nums.length;
        int number=0;
        for(int num:nums){
            number ^=num;
        }
        return number;
    }
}