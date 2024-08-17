class Solution {
public:
    int divide(int dividend, int divisor) {
        // Edge Case:
        if (dividend == divisor)
            return 1;
        char sign = '+';
        if (dividend >= 0 && divisor < 0)
            sign = '-';
        if (dividend < 0 && divisor > 0)
            sign = '-';
        long n = abs(dividend);
        long d = abs(divisor);
        long quotient = 0;
        while(n>=d)
        {
            int cnt = 0;
            while(n>=(d<<(cnt+1)))
                cnt+=1;
            quotient+=1<<cnt;
            n-=(d<<cnt);
        }

        if(quotient == (1<<31) && sign=='+')
            return INT_MAX;
        if(quotient==(1<<31) && sign=='-')
            return INT_MIN;
        return sign=='+'?quotient:-quotient;
    }
};

auto init = []
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    return 'c';
}();