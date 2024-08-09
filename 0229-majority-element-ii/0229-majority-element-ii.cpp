class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // map<int,int> mp;
        // vector<int> result;
        // for(int i=0;i<nums.size();i++){
        //     mp[nums[i]]++;
        // }
        // for(auto m:mp){
        //     if(m.second>(nums.size()/3)) result.push_back(m.first);
        // }
        // return result;

        //Boyer-Moore Voting Algorithm, N/3
        //There can be atmost 2 elements which appears n/3 times
       
        int n = nums.size();
        if (n == 0) return {};

        int count1 = 0, count2 = 0;
        int candidate1 = 0, candidate2 = 1;

        for (int num : nums) {
            if (num == candidate1) {
                count1++;
            } else if (num == candidate2) {
                count2++;
            } else if (count1 == 0) {
                candidate1 = num;
                count1 = 1;
            } else if (count2 == 0) {
                candidate2 = num;
                count2 = 1;
            } else {
                count1--;
                count2--;
            }
        }

        count1 = 0;
        count2 = 0;
        for (int num : nums) {
            if (num == candidate1) count1++;
            else if (num == candidate2) count2++;
        }

        vector<int> result;
        if (count1 > n / 3) result.push_back(candidate1);
        if (count2 > n / 3 && candidate1 != candidate2) result.push_back(candidate2);

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