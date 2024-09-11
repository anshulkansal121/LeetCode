class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans = start^goal;
        int cnt=0;
        while(ans)
        {
            if(ans&1)
                cnt+=1;
            ans = ans>>1;
        }
        return cnt;
    }
};

auto init = []()
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    return 'c';
}();