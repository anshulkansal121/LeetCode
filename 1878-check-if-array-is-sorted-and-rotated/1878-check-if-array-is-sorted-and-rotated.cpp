class Solution {
public:
    bool check(vector<int>& nums) {
        int cnt= 0;
        int n = nums.size() ,i = 0;
        while(i<n-1)
        {
            if(nums[i]>nums[i+1])
                cnt++;
            i++;
        }
        if(nums[n-1]>nums[0]) cnt++;
        return cnt<=1;
    }
};