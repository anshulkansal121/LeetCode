class Solution {
public:
    //APPROACH 1
    //Using MAP DS to store the index which have been traversed / Added to the permutation
    void permutation(unordered_map<int,int>& mp, vector<int>& nums, vector<vector<int>>& ds, vector<int>& temp)
    {
        if(temp.size()==nums.size())
        {
            ds.push_back(temp);
            return;
        }
        for(int i = 0;i<nums.size();i++)
        {
            if(!mp[i])
            {
                mp[i] = 1;
                temp.push_back(nums[i]);
                permutation(mp,nums,ds,temp);
                temp.pop_back();
                mp[i] = 0;
            }
        }
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ds;
        vector<int> temp;
        unordered_map<int,int> mp;
        permutation(mp,nums,ds,temp);
        return ds;
    }
};

auto init = []
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    return 'c';

}();