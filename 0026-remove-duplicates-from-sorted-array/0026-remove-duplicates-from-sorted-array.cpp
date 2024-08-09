class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int cnt = 1;
       int i = 0, j = 1;
        while(j<nums.size())
        {
            while(j<nums.size() && nums[i]==nums[j])
                j++;
            if(j<nums.size() && nums[i]!=nums[j])
            {
                nums[++i] = nums[j++];
                cnt++;
            }
        }  
        return cnt; 
    }
};

auto init = []
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    return 'c';
}();