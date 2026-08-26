class Solution {
public:
    int area=0,max_area=0;
    void dfs(int i,int j,vector<vector<int>>& grid,vector<vector<bool>>& visited,int n,int m){
        if(i<0||j<0||i>=n||j>=m||visited[i][j]||grid[i][j]!=1){
            return;
        }
        visited[i][j]=true;
        area++;
        max_area=max(area,max_area);
        dfs(i-1,j,grid,visited,n,m);
        dfs(i,j+1,grid,visited,n,m);
        dfs(i+1,j,grid,visited,n,m);
        dfs(i,j-1,grid,visited,n,m);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        if(grid.size()==0){
            return 0;
        }
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<bool>>visited(n,vector<bool>(m,false));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1&&visited[i][j]==false){
                    area=0;
                    dfs(i,j,grid,visited,n,m);
                }
            }
        }
        return max_area;
    }
};
