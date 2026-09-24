class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {
        vector<long long> ans(k);
        vector<long long> dp(k);

        for (int x : nums) {
            vector<long long> next(k);

            next[x % k]++;

            for (int r = 0; r < k; r++) {
                next[(1LL * r * x) % k] += dp[r];
            }

            dp = next;

            for (int r = 0; r < k; r++) {
                ans[r] += dp[r];
            }
        }

        return ans;
    }
};