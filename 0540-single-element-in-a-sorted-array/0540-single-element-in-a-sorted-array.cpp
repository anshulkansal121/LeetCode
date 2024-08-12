class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        int beg = 0;
        int end = nums.size()-1;
        while(beg<=end)
        {
            int mid = beg + (end-beg)/2;
            if((mid==nums.size()-1 || mid==0) || nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1])
                return nums[mid];
            if(mid%2==0 && nums[mid] !=nums[mid+1])
                end = mid-1;
            else if(mid%2!=0 && nums[mid]!=nums[mid-1])
                end = mid-1;
            else
                beg = mid+1;
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