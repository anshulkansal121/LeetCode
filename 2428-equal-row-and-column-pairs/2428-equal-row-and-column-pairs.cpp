class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int count=0;
        for(int i=0;i<grid.size();i++){
            vector<int> row = grid[i];
            int k=0;
            while(k<grid.size()){
                vector<int> col(grid[i].size(),0);
                for(int j=0;j<grid[i].size();j++){
                    col[j]=grid[j][k];
                }
                if(row==col) count++;
                k++;
            }
        }
        return count;
    }
};