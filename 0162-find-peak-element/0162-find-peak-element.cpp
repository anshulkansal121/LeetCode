class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if(n==1)    return 0;
        if(nums[0]>nums[1]) return 0;
        else if(nums[n-1]>nums[n-2])    return n-1;
        int beg = 1, end = n-2;
        while(beg<=end)
        {
            int mid = beg + (end-beg)/2;
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1])  
                return mid;
            else if(nums[mid]>nums[mid-1])
                beg = mid+1;
            else
                end = mid-1;
        }
        return -1;
    }
};

auto init = []
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    return 'c';
}();