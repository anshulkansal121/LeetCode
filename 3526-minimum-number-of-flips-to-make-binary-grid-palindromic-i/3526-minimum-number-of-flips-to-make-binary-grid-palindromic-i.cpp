class Solution {
public:
    int minFlips(vector<vector<int>>& grid) {
        //ROW PALINDROME
        int rowflip = 0;
        for(int i = 0;i<grid.size();i++)
        {
            int j = 0, k = grid[0].size()-1;
            int c =0;
            while(j<=k)
            {
                if(grid[i][j++]!=grid[i][k--])
                    c++;
            }
            rowflip+=c;
        } 

        //Column Palindrome
        int colflip = 0;
        for(int i = 0;i<grid[0].size();i++)
        {
            int j = 0, k = grid.size()-1;
            int c =0;
            while(j<=k)
            {
                if(grid[j++][i]!=grid[k--][i])
                    c++;
            }
            colflip+=c;
        }
        return min(rowflip,colflip);  
    }
};

auto init = []
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    return 'c';
}();