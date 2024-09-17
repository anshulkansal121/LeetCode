class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        string s = s1 + " " + s2;
        stringstream str(s);

        unordered_map<string, int> mp;
        string tmp;
        while (str >> tmp) {
            mp[tmp]++;
        }
        vector<string> ans;
        for (auto& val : mp) {

            if (val.second == 1) {
                ans.push_back(val.first);
            }
        }

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