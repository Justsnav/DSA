class Solution {
public:
    void dfs(vector<vector<char>>& grid, vector<vector<bool>>& visited,int m, int n, int i,int j ){
        if(i<0 || j<0 || i>=m || j>=n || visited[i][j] || grid[i][j]!='1' )
            return ;
        visited[i][j] = true;
        dfs(grid,visited,m,n,i-1,j);
        dfs(grid,visited,m,n,i,j+1);
        dfs(grid,visited,m,n,i+1,j);
        dfs(grid,visited,m,n,i,j-1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        vector<vector<bool>>visited(m,vector<bool>(n,false));
        int count = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!visited[i][j] && grid[i][j] == '1'){
                    count++;
                    dfs(grid,visited,m,n,i,j);
                }
            }
        }
        return count;

    }
};