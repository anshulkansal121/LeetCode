class Solution {
public:
    bool ismagicSquare(vector<vector<int>>& grid, int r, int c)
    {
        //check for duplicate
        vector<int>nums (10,0);
        for(int i = 0;i<3;i++)
        {
            for(int j = 0;j<3;j++)
            {
                int num = grid[r+i][c+j];
                if(num<=0 || num>9 || nums[num]==1)
                    return false;
                else
                    nums[num]++;
            }
        }

        //Rows and Cols Sum
        int Rsum = grid[r][c] + grid[r][c+1] + grid[r][c+2];
        for(int i = 0;i<3;i++)
        {
            if(grid[r+i][c] + grid[r+i][c+1] + grid[r+i][c+2] != Rsum)
                return false;
            if(grid[r][c+i] + grid[r+1][c+i] + grid[r+2][c+i] !=Rsum)
                return false;
        }

        //Diagonal and Anti-Diagonal Sum
        if (grid[r][c] + grid[r + 1][c + 1] + grid[r + 2][c + 2] != Rsum) {
            return false;
        }
        if (grid[r][c + 2] + grid[r + 1][c + 1] + grid[r + 2][c] != Rsum) {
            return false;
        }
        return true;
    }
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int cnt = 0;
        for(int i = 0;i<=rows-3;i++)
        {
            for(int j = 0;j<=cols-3;j++)
            {
                if(ismagicSquare(grid, i,j))
                    cnt++;
            }
        }
        return cnt;
    }
};
auto init = []
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    return 'c';
}();