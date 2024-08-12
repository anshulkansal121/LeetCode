class Solution {
public:
    int findMin(vector<int>& nums) {
        int minn = INT_MAX;
        int l = 0, r = nums.size()-1;
        while(l<=r)
        {
            int mid = l + (r-l)/2;
            if(nums[l]<=nums[mid])
            {
                minn = min(minn,nums[l]);
                l = mid+1;
            }else
            {
                minn = min(minn,nums[mid]);
                r = mid-1;
            }
        }
    return minn;
    }
};

auto init = []{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    return 'c';
}();