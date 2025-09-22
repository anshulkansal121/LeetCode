class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mp;
        int maxfre = INT_MIN;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
            maxfre = max(maxfre,mp[nums[i]]);
        }
        for(auto &m: mp)
        {
            if(m.second == maxfre)
                sum+=m.second;

        }
        return sum;
    }
};

auto init = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 'c';
}();