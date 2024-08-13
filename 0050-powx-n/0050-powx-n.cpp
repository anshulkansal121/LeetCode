class Solution {
public:
    double myPow(double x, int n) {
        if(n==0)
            return 1;
        if (n == INT_MIN) {
            x = x * x;
            n = n / 2;
        }
        if(n>0)
            return x*pow(x,n-1);
        else
            return 1/pow(x,-n);
    }
};

auto init = []
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    return 'c';
}();