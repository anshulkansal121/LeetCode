class Solution {
public:
    int minDays(vector<vector<int>>& grid) {
        vector<vector<int>> t = grid;
        if(!isConnected(t)) return 0;
        
        int n = grid.size(), m = grid[0].size();
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++){
                if(grid[i][j]){
                    t = grid;
                    t[i][j] = 0;
                    if(!isConnected(t)) return 1;
                }
            }
        }

        return 2;
    }

    bool isConnected(vector<vector<int>> &grid){
        bool ok = false;
        int n = grid.size(), m = grid[0].size();
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++){
                if(grid[i][j] && ok) return false;
                if(grid[i][j]){
                    dfs(i, j, grid);
                    ok = true;
                }
            }
        }
        return ok;
    }

    void dfs(int i, int j, vector<vector<int>> &grid){
        if(i < 0 || i >= grid.size() ||
            j < 0 || j >= grid[0].size() ||
             !grid[i][j]) 
                return;

        grid[i][j] = 0;
        dfs(i+1, j, grid);dfs(i-1, j, grid);
        dfs(i, j+1, grid);dfs(i, j-1, grid);
    }
};