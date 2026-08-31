class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        vector<int> ans;

        int sm = accumulate(nums.begin(), nums.end(), 0);

        sort(nums.rbegin(), nums.rend());

        int sum = 0;

        for(int x : nums) {
            sum += x;
            ans.push_back(x);

            if(sum > sm - sum) {
                break;
            }
        }

        return ans;
    }
};