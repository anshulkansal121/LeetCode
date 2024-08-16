class Solution {
public:
    int countPrimes(int n) {
        vector<int> prime(n+1,1);
        for(int i = 2;(i*i)<=n;i++)
        {
            if(prime[i]==1)
            {
                for(int k = i*i;k<=n;k+=i)
                 prime[k]=0;
            }
        }
        int cnt = 0;
        for(int i = 2;i<n;i++)
        {
            if(prime[i])
                cnt++;
        }
        return cnt;
    }
};

auto init = []
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    return 'c';
}();