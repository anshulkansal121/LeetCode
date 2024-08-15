class Solution {
public:
    void subsequences(int ind, vector<int>& nums, vector<vector<int>>& result, vector<int>& temp)
    {
        if(ind>=nums.size())
        {
            result.push_back(temp);
            return;
        }
        temp.push_back(nums[ind]);
        subsequences(ind+1,nums,result,temp);
        temp.pop_back();
        subsequences(ind+1,nums,result,temp);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        //Recursion Approach
        vector<vector<int>> result;
        vector<int> temp;
        subsequences(0,nums, result,temp);
        return result;
    }
};

auto init = []()
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    return 'c';
}();
