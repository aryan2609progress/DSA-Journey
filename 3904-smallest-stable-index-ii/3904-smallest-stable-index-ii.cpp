class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        vector<int> mn(n);
        mn[n - 1] = nums[n - 1];

        // Right se minimum store karo
        for(int i = n - 2; i >= 0; i--) {
            mn[i] = min(nums[i], mn[i + 1]);
        }

        int ans = nums[0];

        // Left se jao, first stable index hi smallest hoga
        for(int i = 0; i < n; i++) {
            ans = max(ans, nums[i]);

            if(ans - mn[i] <= k) {
                return i;
            }
        }

        return -1;
    }
};