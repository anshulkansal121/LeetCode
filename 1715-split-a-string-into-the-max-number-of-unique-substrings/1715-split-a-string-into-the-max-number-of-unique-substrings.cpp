class Solution {
public:
    int maxUniqueSplit(string s) {
        set<string> st;
        return backtrack(s, 0, st);
    }

private:
    int backtrack(const string& s, int start, set<string>& st) {

        if (start == s.size())
            return 0;

        int maxCount = 0;

        for (int end = start + 1; end <= s.size(); ++end) {
            string substring = s.substr(start, end - start);
            if (st.find(substring) == st.end()) {
                st.insert(substring);
                maxCount = max(maxCount, 1 + backtrack(s, end, st));
                st.erase(substring);
            }
        }
        return maxCount;
    }
};