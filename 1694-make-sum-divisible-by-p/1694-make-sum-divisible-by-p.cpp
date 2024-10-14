class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        long long arraysum =0;
        for(auto num:nums)
        {
            arraysum+=num;
            arraysum = arraysum%p;
        }
        int target = arraysum % p;
        if(!target)
            return 0;

        long long prefixsum = 0; 
        int minLength = nums.size();
        unordered_map<int, int> mp;
        mp[0] = -1; 

        for (int i = 0; i < nums.size(); i++) {
            prefixsum += nums[i];
            int targetrem = (prefixsum - target) % p;

            if (mp.find(targetrem) != mp.end()) {
                minLength = min(minLength, i - mp[targetrem]);
            }

            mp[prefixsum % p] = i;
        }

        return minLength < nums.size() ? minLength : -1;
    }
};