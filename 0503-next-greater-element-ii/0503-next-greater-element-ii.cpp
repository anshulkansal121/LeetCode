class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int N = nums.size();
        stack<int> st;
        vector<int> result(N, -1);
        st.push(nums[N-1]);
        for (int i = ((2*N) - 1); i >= 0; i--) {

            while (!st.empty() && nums[i%N] >=st.top())
                st.pop();
            if (i<N)
                result[i] = st.empty()?-1:st.top();
            
            st.push(nums[i%N]);
        }
    return result;
}
}
;
auto init = [] {
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    return 'c';
}();