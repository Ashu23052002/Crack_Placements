/*

void dfs(vector<vector<char>>& grid, int &i, int &j, vector<vector<int>>& vis) {
         
        
         vis[i][j] = 1;
         
         int dr[] = {-1,-1,-1,0,1,1,1,0};
         int dc[] = {-1,0,1,1,1,0,-1,-1};
         
         for(int k=0;k<8;k++){
             int nr = i + dr[k];
             int nc = j + dc[k];
              if (nr >= 0 && nr < grid.size() && nc >= 0 && nc < grid[0].size() && 
                grid[nr][nc] == '1' && vis[nr][nc] == 0) {
                dfs(grid, nr, nc, vis);
            }
         }
    }
  public:
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int n = grid.size();
        int m = grid[0].size();
        
        int islands = 0;
        vector<vector<int>>vis(n,vector<int>(m,0));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1' && vis[i][j]==0){
                    dfs(grid,i,j,vis);
                    islands++;
                }
            }
        }
        
        return islands;
    }

*/