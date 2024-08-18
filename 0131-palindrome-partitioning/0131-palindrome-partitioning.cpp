class Solution {
public:
    //Check for Palindrome
    bool isPalindrome(string s, int start, int end)
    {
        while(start<=end)
        {
            if(s[start++]!=s[end--])
                return false;
        }
        return true;
    }

    //Recursive Func:
    void palindromePartitioning(string s, int ind, vector<string>& temp, vector<vector<string>>& ans)
    {
        if(ind==s.size())
        {
            ans.push_back(temp);
            return;
        }
        for(int i = ind;i<=s.size();i++)
        {
            if(isPalindrome(s,ind,i))
            {
                temp.push_back(s.substr(ind,i-ind+1));
                palindromePartitioning(s,i+1,temp,ans);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> temp;
        palindromePartitioning(s,0,temp,ans);
        return ans;
    }
};

auto init = []
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    return 'c';
}();