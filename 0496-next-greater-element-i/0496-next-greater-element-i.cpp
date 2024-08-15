class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int,int> mp;
        vector<int> result;
        for(int i = nums2.size()-1;i>=0;i--)
        {
            if(st.empty())
                mp[nums2[i]] = -1;
            else
            {
                while(!st.empty() && nums2[i]>st.top())
                    st.pop();
                if(!st.empty())
                    mp[nums2[i]] = st.top();
                else
                    mp[nums2[i]] = -1;
            }
            st.push(nums2[i]);
        }
        for(auto num:nums1)
        {
            result.push_back(mp[num]);
        }
        return result;
    }
};