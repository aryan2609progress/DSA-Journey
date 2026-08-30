class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mn = *min_element(nums.begin(), nums.end());
        int mx = *max_element(nums.begin(), nums.end());

        int ml = 0, mnl = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            if(nums[i] == mx)
                ml = i;

            if(nums[i] == mn)
                mnl = i;
        }

        int ans1 = max(ml, mnl) + 1;       // front se dono
        int ans2 = n - min(ml, mnl);       // back se dono
        int ans3 = min(ml, mnl) + 1 + n - max(ml, mnl); // mixed

        return min({ans1, ans2, ans3});
    }
};