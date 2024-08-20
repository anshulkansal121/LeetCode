using ll = long long;
const int MOD = 1e9 + 7;

class Solution {
public:
    long long subArrayMax(vector<int>& A) {
        int n = A.size();
        long long sum = 0;
        vector<int> maxPrev(n, -1);
        vector<int> maxNext(n, n);
        stack<int> NGE;
        stack<int> PGE;

        // PGE
        for (int i = 0; i < n; i++) {
            while (!PGE.empty() && A[PGE.top()] <= A[i])
                PGE.pop();
            if (!PGE.empty())
                maxPrev[i] = PGE.top();
            PGE.push(i);
        }

        // NGE
        for (int i = n - 1; i >= 0; i--) {
            while (!NGE.empty() && A[NGE.top()] < A[i])
                NGE.pop();
            if (!NGE.empty())
                maxNext[i] = NGE.top();
            NGE.push(i);
        }
        for (int i = 0; i < n; ++i) {
            sum +=
                static_cast<ll>(i - maxPrev[i]) * (maxNext[i] - i) * A[i];
            // sum %= MOD;
        }

        return sum;
    }

    long long subArrayMin(vector<int>& nums) {
        int length = nums.size();
        vector<int> left(length, -1);
        vector<int> right(length, length);
        stack<int> stk;

        for (int i = 0; i < length; ++i) {
            while (!stk.empty() && nums[stk.top()] >= nums[i]) {
                stk.pop();
            }
            if (!stk.empty()) {
                left[i] = stk.top();
            }
            stk.push(i);
        }

        stk = stack<int>();

        for (int i = length - 1; i >= 0; --i) {
            while (!stk.empty() && nums[stk.top()] > nums[i]) {
                stk.pop();
            }
            if (!stk.empty()) {
                right[i] = stk.top();
            }
            stk.push(i);
        }

        ll sum = 0;

        for (int i = 0; i < length; ++i) {
            sum +=
                static_cast<ll>(i - left[i]) * (right[i] - i) * nums[i];
            // sum %= MOD;
        }

        return sum;
    }

    long long subArrayRanges(vector<int>& nums) {
        // Optimal Solution: Sum of Subarray  Maximum - Sum of Subarray Minimum
        return subArrayMax(nums) - subArrayMin(nums);
    }
};

auto init = []
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    return 'c';
}();