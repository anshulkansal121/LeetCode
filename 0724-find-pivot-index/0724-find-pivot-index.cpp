class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int rsum=0,lsum=0;
        rsum = accumulate(nums.begin(),nums.end(),0)-nums[0];
        for(int i=0;i<nums.size();i++){
            if(lsum==rsum) return i;
            else{
                lsum+=nums[i];
                if(i<nums.size()-1){
                    rsum-=nums[i+1];
                }else break;
            }
        }
        return -1;
    }
};

auto init= []
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    return 'c';
}();