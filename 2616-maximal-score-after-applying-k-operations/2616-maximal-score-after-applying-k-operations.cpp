class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long score = 0;
        priority_queue<int> q;
        for (auto n : nums) {
            q.push(n);
        }
        while (k--) {
            double n = q.top();
            score += n;
            q.pop();
            q.push(ceil(n / 3));
        }

        return score;
    }
};