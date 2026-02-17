class Solution {
public:
    int maxIndex(vector<vector<int>>& mat, int m, int n, int col){
        int maxValue = -1;
        int index = -1;
        for(int i=0;i<m;i++){
            if(maxValue < mat[i][col]){
                    maxValue = mat[i][col];
                    index = i;
                }
        }
        return index;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();;
        int low = 0;
        int high = n-1;
        while(low <= high){
           int mid =((high + low)/2);
           int maxrowIndex = maxIndex(mat,m,n,mid);
           int left  = (mid - 1 >= 0) ? mat[maxrowIndex][mid - 1] : -1;
           int right = (mid + 1 < n)  ? mat[maxrowIndex][mid + 1] : -1;
           if(mat[maxrowIndex][mid] > left && mat[maxrowIndex][mid] > right){
            return {maxrowIndex, mid};
           }else if(mat[maxrowIndex][mid] < left){
            high = mid-1;
           }else{
            low = mid+1;
           }
        }
        return {};
    }
};