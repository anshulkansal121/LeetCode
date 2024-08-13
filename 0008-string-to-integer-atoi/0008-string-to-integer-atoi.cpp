class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        char sign = '+';
        int num = 0;
        while (s[i] == ' ')
            i++;
        if (s[i] == '+' || s[i] == '-')
        {
            sign = s[i];
            i++;
        }
        while (i < s.size() && (s[i] >= '0' && s[i] <= '9')) {
                if (num > (INT_MAX - (s[i] - '0')) / 10)
                    return sign == '-' ? INT_MIN : INT_MAX;
                num = num * 10 + (s[i] - '0');
                i++;
        }
        if (sign == '-')
            return num * -1;
        else
            return num;
    }
};

auto init = []
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    return 'c';
}();