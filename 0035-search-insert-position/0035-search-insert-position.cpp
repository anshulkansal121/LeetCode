class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(target>nums[nums.size()-1])
            return nums.size();
        else if(target<nums[0])
            return 0;
        int beg = 0;
        int end = nums.size()-1;
        while(beg<=end)
        {
            int mid = beg + (end-beg)/2;
            if(nums[mid]==target)
                return mid;
            else if(target>nums[mid])
            {
                if(nums[mid+1]>target)
                    return mid+1;
                beg = mid+1;
            }
            else 
            {
                if(nums[mid-1]<target)
                    return mid;
                end = mid-1;
            }
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