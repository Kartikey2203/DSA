class Solution {
public:
    void dfs(vector<vector<char>>& grid,vector<vector<bool>>& vis,int m,int n,int i,int j){
        if(i<0||j<0||i==m||j==n||vis[i][j]==true||grid[i][j]=='0'){
            return ;
        }
        vis[i][j]=true;
        dfs(grid,vis,m,n,i+1,j);
        dfs(grid,vis,m,n,i,j+1);
        dfs(grid,vis,m,n,i-1,j);
        dfs(grid,vis,m,n,i,j-1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int island=0;
        vector<vector<bool>> vis(m,vector<bool>(n,false));
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]=='1' && vis[i][j]==false){
                dfs(grid,vis,m,n,i,j);
                island++;
            }
            }
        }
        return island;
    }
};