class Solution {
public:
    int minSteps(int n) {
        if (n == 1) return 0;

        // dp[i] represents the minimum steps required to get i characters
        vector<int> dp(n + 1, 0);

        for (int i = 2; i <= n; ++i) {
            dp[i] = i; // Worst case, just paste one by one from the beginning
            for (int j = i / 2; j > 0; --j) {
                if (i % j == 0) {
                    dp[i] = dp[j] + (i / j); // dp[j] + (i/j) steps: copy and paste
                    break;
                }
            }
        }

        return dp[n];
    }
};
