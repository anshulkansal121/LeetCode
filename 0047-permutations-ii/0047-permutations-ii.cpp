class Solution {
public:
    void generatePermutation(vector<int>& nums, int ind,
                             set<vector<int>>& ans) {
        if (ind == nums.size()) {
            ans.insert(nums);
            return;
        }
        for (int i = ind; i < nums.size(); i++) {
            if (i > ind && nums[i] == nums[i-1])
                continue;
            swap(nums[i], nums[ind]);
            generatePermutation(nums, ind + 1, ans);
            swap(nums[i], nums[ind]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> ans;
        sort(nums.begin(), nums.end());
        generatePermutation(nums, 0, ans);
        vector<vector<int>> result(ans.begin(),ans.end());
        return result;
    }
};

auto init = [] {
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    return 'c';
}();