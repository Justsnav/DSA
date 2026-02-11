class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int column = matrix[0].size();
        vector<bool>zerorow(row,false);
        vector<bool>zerocolumn(column,false);
        for(int i=0;i<row;i++){
            for(int j =0;j<column;j++){
                if(matrix[i][j]==0){
                    zerorow[i]=true;
                    zerocolumn[j]=true;
                }
            }
        }
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                if(zerorow[i]||zerocolumn[j]){
                    matrix[i][j]=0;
                }
            }
        }
    }
};