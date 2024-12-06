class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        // sort(banned.begin(),banned.end());
        long sum = 0;
        long cnt= 0;
        for(int i = 1;i<=n;i++)
        {
            
            if(find(banned.begin(),banned.end(),i)==banned.end() && sum+i<=maxSum)
            {
                sum+=i;
                cnt++;
            }else if(find(banned.begin(),banned.end(),i)==banned.end() && sum+i>=maxSum)
            {
                return cnt;
            }
            
        }   
        return cnt;
    }
};