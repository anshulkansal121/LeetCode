class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int result = INT_MAX;
        int i = 0;
        int j = 1;
        int sum = nums[i];
        while(i<nums.size())
        {
            if(sum>=target)
            {
                result = min(result,j-i);
                sum-=nums[i++];
            }
            else if(sum<target && j<nums.size())
                sum+=nums[j++]; 
            else
                break;
        }
        if(i==0)
            return 0;
        return result;
    }
};