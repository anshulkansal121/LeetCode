class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {

        // BRUTE FORCE: Generate all Subarrays and check for summation
        // TLE
        // int n = nums.size();
        // int cnt = 0;
        // for(int i = 0;i<n;i++)
        // {
        //     int sum = 0;
        //     for(int  j = i;j<n;j++)
        //     {
        //         sum+=nums[j];
        //         if(sum==target)
        //             cnt++;
        //         if(sum>target)
        //             break;
        //     }
        // }
        // return cnt;'

        // OPTIMAL APPROACH
        //  unordered_map<int, int> count;
        //  count[0] = 1;
        //  int curr_sum = 0;
        //  int total_subarrays = 0;

        // for (int num : nums) {
        //     curr_sum += num;
        //     if (count.find(curr_sum - goal) != count.end()) {
        //         total_subarrays += count[curr_sum - goal];
        //     }
        //     count[curr_sum]++;
        // }

        // return total_subarrays;

        // TRY NEW APPROACH
        int start = 0, end = 0, n = nums.size();
        unordered_map<int, int> mp;
        mp[0] = 1;
        int sum = 0, cnt = 0;
        while (end < n) {
            sum += nums[end];
            cnt += mp[sum - goal];
            mp[sum]++;
            end++;
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