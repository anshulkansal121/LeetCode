class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0)
            return 0;
        unordered_set<int> st;
        for(auto n:nums)
        {
            st.insert(n);
        }
        int cnt = 0, longest = 1;
        for(auto s:st)
        {
            if(st.find(s-1)==st.end())
            {
                cnt = 1;
                int x = s;
                while(st.find(x+1)!=st.end())
                {
                    x= x+1;
                    cnt++;
                }
                longest = max(longest,cnt);
            }
        }
        return longest;
    }
};

auto init = []
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    return 'c';
}();