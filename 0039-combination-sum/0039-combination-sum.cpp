class Solution {
public:
    void combinations(vector<int>& candidates, int ind, int n, int target, vector<int>& temp, vector<vector<int>>& result)
    {
        if(ind==n)
        {
            if(target==0)
                result.push_back(temp);
            return;
        }
        if(candidates[ind]<=target)
        {
            temp.push_back(candidates[ind]);
            combinations(candidates, ind, n,target-candidates[ind],temp,result);
            temp.pop_back();
        }
        combinations(candidates, ind+1, n, target, temp,result);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> temp;
        int n = candidates.size();
        combinations(candidates, 0, n, target, temp, result);
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