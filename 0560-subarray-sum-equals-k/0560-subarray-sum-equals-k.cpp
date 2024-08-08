class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // BRUTE FORCE
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++) {
            int sum = 0;
            for (int j = i; j < nums.size(); j++) {
                sum += nums[j];
                if (sum == k)
                    cnt++;
            }
        }
        return cnt;
    }
};

auto init = [] {
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    return 'c';
}();