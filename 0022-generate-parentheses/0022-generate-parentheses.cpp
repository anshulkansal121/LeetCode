class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string temp="";
        generateParentheses(result,temp, n, 0);
        return result;
    }
    void generateParentheses(vector<string>& result, string temp, int n, int m)
    {
        if(m==0 && n==0)
        {
            result.push_back(temp);
            return;
        }
        if(n>0) generateParentheses(result,temp+"(",n-1,m+1);
        if(m>0) generateParentheses(result,temp+")",n,m-1);
    }
};