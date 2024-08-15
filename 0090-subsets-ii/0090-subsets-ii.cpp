class Solution {
public:
    void subset(vector<int>& nums, int ind, vector<int>& ds, vector<vector<int>>& result)
    {
        result.push_back(ds);
        for(int i = ind;i<nums.size();i++)
        {
            if(i>ind && nums[i]==nums[i-1]) continue;
            ds.push_back(nums[i]);
            subset(nums,i+1,ds,result);
            ds.pop_back();
            
        }


    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> ds;
        sort(nums.begin(),nums.end());
        subset(nums,0,ds,result);
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