class Solution {
public:
    bool isSafe(int row, int col, vector<string>& board, int n){
        int r = row;
        int c = col;
        //col check
        while(col>=0)
        {
            if(board[row][col]=='Q')
                return false;
            col--;
        }

        row = r;
        col = c;

        //Diagonal Check;
        while(row>=0 && col>=0)
        {
            if(board[row][col]=='Q')
                return false;
            row--;
            col--;
        }

        row = r;
        col = c;
        while(row<n && col>=0)
        {
            if(board[row][col]=='Q')
                return false;
            row++;
            col--;
        }
        return true;
    }
    void NQueens(int col, vector<string>& board, vector<vector<string>>& ans, int n)
    {
        if(col==n)
        {
            ans.push_back(board);
            return;
        }
        for(int row = 0;row<n;row++)
        {
            if(isSafe(row,col,board,n))
            {
                board[row][col] = 'Q';
                NQueens(col+1,board,ans,n);
                board[row][col] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board (n,string(n,'.'));
        NQueens(0,board,ans,n);
        return ans;
    }
};

auto init = []
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    return 'c';
}();