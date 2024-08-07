class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int j = 0, i = 0;
        int maxx = 0;
        int ones = 0 ,zeros = 1;

        while(i<nums.size())
        {
            if(nums[i]==0)
                zeros--;
            ones++;
            while(zeros<0)
            {
                if(nums[j]==0)
                    zeros++;
                ones--;
                j++;
            }
            maxx = max(maxx,ones);
            i++;
            
        }
        return maxx-1;
    }
};

auto init = []
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    return 'c';
}();