class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        double ans = DBL_MAX;

        int i = 0;
        int j = nums.size() - 1;

        while (i < j) {
            ans = min(ans, (nums[i] + nums[j]) / 2.0);
            i++;
            j--;
        }

        return ans;
    }
};