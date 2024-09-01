class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if(m*n != original.size())
            return {};
        vector<vector<int>> result(m,vector<int>(n));
        vector<int> temp;
        int k = 0;
        for(int i = 0;i<m;i++)
        {
            for(int j = 0;j<n;j++)
                result[i][j] = original[k++];
        }
        return result;
    }
};

auto init = []
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    return 'c';
}();