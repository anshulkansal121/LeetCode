class Solution {
public:
    string frequencySort(string s) {
        map<char,int> mp;
        vector<pair<int,char>> v;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        } 
        for(auto m:mp)
            v.push_back({m.second,m.first});
        sort(v.begin(),v.end(),greater<pair<int, char>>());
        string result="";
        for(auto i:v)
        {
           while(i.first--) result+=i.second;
        }
        return result;
    }
};