class Solution {
public:
    void combination(int  k , int n, int num, vector<vector<int>>& result, vector<int>& temp)
    {
        if(n==0 && temp.size()==k)
        {
            result.push_back(temp);
            return;
        }
        for(int i = num;i<=9;i++)
        {
            if(i>n) break;;
            temp.push_back(i);
            combination(k,n-i,i+1, result,temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> result;
        vector<int> temp;
        combination(k, n, 1,result,temp);
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