class Solution {
public:
    int firstOcc(vector<int>& nums, int l, int r,int target)
    {
        int ans = -1;
        while(l<=r){
            int mid = l+(r-l)/2;
            if(nums[mid]==target)
            {
                ans = mid;
                r = mid-1;
            }else if(target>nums[mid])
                l = mid+1;
            else
                r = mid-1;
        }
        return ans;
    }

    int lastOcc(vector<int>& nums, int l, int r,int target)
    {
        int ans = -1;
        while(l<=r){
            int mid = l+(r-l)/2;
            if(nums[mid]==target)
            {
                ans = mid;
                l = mid+1;
            }else if(target>nums[mid])
                l = mid+1;
            else
                r = mid-1;
        }
        return ans;
    }


    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result(2,-1);
        result[0] = firstOcc(nums,0,nums.size()-1,target);
        if(result[0]==-1)
            return result;
        result[1] = lastOcc(nums,0,nums.size()-1,target);
        return result;
    }
};

auto init = []
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    return 'c';
}();