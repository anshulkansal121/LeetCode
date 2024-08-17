class Solution {
public:
    //APPROACH 1
    //Using MAP DS to store the index which have been traversed / Added to the permutation
    // void permutation(unordered_map<int,int>& mp, vector<int>& nums, vector<vector<int>>& ds, vector<int>& temp)
    // {
    //     if(temp.size()==nums.size())
    //     {
    //         ds.push_back(temp);
    //         return;
    //     }
    //     for(int i = 0;i<nums.size();i++)
    //     {
    //         if(!mp[i])
    //         {
    //             mp[i] = 1;
    //             temp.push_back(nums[i]);
    //             permutation(mp,nums,ds,temp);
    //             temp.pop_back();
    //             mp[i] = 0;
    //         }
    //     }
        
    // }
    void permutation(int ind, vector<int>& nums, vector<vector<int>>& ans)
    {
        //Base Condition:
        if(ind == nums.size())
        {
            ans.push_back(nums);
            return;
        }
        for(int i = ind;i<nums.size();i++)
        {
            swap(nums[i],nums[ind]);
            permutation(ind+1,nums,ans);
            swap(nums[i],nums[ind]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {

        // Approach 1:
        // vector<vector<int>> ds;
        // vector<int> temp;
        // unordered_map<int,int> mp;
        // permutation(mp,nums,ds,temp);
        // return ds;

        //Approach 2:
        vector<vector<int>> ans;
        permutation(0,nums,ans);
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