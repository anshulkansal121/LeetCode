class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int i = nums.size()-1 , j = nums.size()-2;
        k = k%nums.size();
        reverse(nums.begin(),nums.end()-k);
        reverse(nums.end()-k,nums.end());
        reverse(nums.begin(),nums.end());

    }
};

auto init = []
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    return 'c';
}();