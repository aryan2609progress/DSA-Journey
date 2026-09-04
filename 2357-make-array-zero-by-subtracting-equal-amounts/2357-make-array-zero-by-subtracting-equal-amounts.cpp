class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        bool seen[101] = {};
        int ans = 0;

        for (int num : nums) {
            if (num > 0 && !seen[num]) {
                seen[num] = true;
                ans++;
            }
        }

        return ans;
    }
};