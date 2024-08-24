class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum = 0, rsum = 0,ans = 0;
        for(int i = 0;i<k;i++)
            lsum+=cardPoints[i];
        ans = lsum;
        int rindex = cardPoints.size()-1;
        for(int i = k-1;i>=0;i--)
        {
            lsum-=cardPoints[i];
            rsum+=cardPoints[rindex--];
            ans = max(ans,lsum+rsum);
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