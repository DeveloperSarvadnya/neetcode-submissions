class Solution {
public:
    void dfs(int i,int j,vector<vector<char>>& grid,vector<vector<bool>>& visited,int n,int m){
        if(i<0||j<0||i>=n||j>=m||visited[i][j]||grid[i][j]!='1'){
            return;
        }
        visited[i][j]=true;
        dfs(i-1,j,grid,visited,n,m);
        dfs(i,j+1,grid,visited,n,m);
        dfs(i+1,j,grid,visited,n,m);
        dfs(i,j-1,grid,visited,n,m);
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<bool>>visited(n,vector<bool>(m,false));
        int numberOfIslands=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'&&visited[i][j]==false){
                    dfs(i,j,grid,visited,n,m);
                    numberOfIslands++;
                }
                
            }
            
        }
        return numberOfIslands;
    }
};
