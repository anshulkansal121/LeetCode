class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int goal) {
        int start = 0, end = 0, n = nums.size();
        unordered_map<int, int> mp;
        mp[0] = 1;
        int sum = 0, cnt = 0;
        while (end < n) {
            sum += (nums[end]%2);
            cnt += mp[sum - goal];
            mp[sum]++;
            end++;
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