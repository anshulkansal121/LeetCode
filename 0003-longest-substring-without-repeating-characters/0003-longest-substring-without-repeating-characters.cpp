#include <bits/stdc++.h>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // if(s.size()==0)
        //     return 0;
        // string temp="";
        // int stringlen = 0;
        // for(int i=0;i<s.size();i++){
        //     for(int j=i;j<s.size();j++)
        //     {
        //         if(temp.find(s[j])==string::npos)
        //             temp+=s[j];
        //         else
        //         {
        //             if(stringlen<temp.size())
        //                 stringlen = temp.size();
        //             temp = "";
        //             break;
        //         }
        //     }
        //     if(stringlen<temp.size())
        //         stringlen = temp.size();
        //     temp = "";
        // }
        // return stringlen;
        // vector<int> hash(255, -1);
        // int l = 0, r = 0, maxlen = 0;
        // int n = s.size();
        // while (r < n) {
        //     if (hash[s[r]] != -1) {
        //         if (hash[s[r]] >= l) {
        //             l = hash[s[r]] + 1;
        //         }
        //     }
        //     int len = r - l + 1;
        //     maxlen = max(maxlen, len);
        //     hash[s[r]] = r;
        //     r++;
        // }
        // return maxlen;

        //optimal Approach:
        vector<int> hash(255 ,-1);
        int l = 0, r = 0, n = s.size();
        int ans = 0;
        while(r<n)
        {
            if(hash[s[r]]!=-1)
            {
                if(hash[s[r]]>=l){
                    l = hash[s[r]]+1;
                }
            }
            int len = r-l+1;
            ans = max(ans,len);
            hash[s[r]] = r;
            r++;
        }
        return ans;
    }
};

auto init = []() {
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    return 'c';
}();