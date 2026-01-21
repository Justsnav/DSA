class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left = 0;
        int right = n-1;
        if(n<2){
            return 0;
        }
        int max_area = 0;
        while(left < right){
            int length = right-left;
            int breadth = min(height[left],height[right]);
            int area = length*breadth;
            max_area = max(area,max_area);
            if(height[left]<height[right]){
                left++;
            }else{
                right--;
            }
            
        }
        return  max_area;
    }
};