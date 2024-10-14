class Solution {
public:
    int minAddToMakeValid(string s) {
        int count = 0;
        stack<char>st;
        for(auto ch:s)
        {
            if(ch=='(')
               st.push(ch);
            else
            {
                if(!st.empty() && st.top()=='(')    
                    st.pop();
                else
                    st.push(ch);
            }
        }
        return  st.size();
    }
};
auto init = []
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    return 'c';

}();