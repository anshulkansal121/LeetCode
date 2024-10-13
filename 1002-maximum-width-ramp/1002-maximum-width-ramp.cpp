class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        //Monotonic Stack
        stack<int> st;
        st.push(0);
        for(int i =1;i<nums.size();i++)
        {
            if(nums[i]<nums[st.top()])
                st.push(i);
        }
        int maxwidth = 0;
        for(int i = nums.size()-1;i>=0;i--)
        {
            while(!st.empty() && nums[i]>=nums[st.top()])
            {
                maxwidth = max(maxwidth, i-st.top());
                st.pop();
            }
        }
        return maxwidth;
    }
};