class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0,sum=0;
        for(int i = 0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(!nums[i])
            {
                ans = max(ans,sum);
                sum = 0;
            }
        }

        return max(sum,ans);
    }
};