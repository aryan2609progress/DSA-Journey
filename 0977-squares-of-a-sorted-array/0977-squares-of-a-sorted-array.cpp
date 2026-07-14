class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        int n = nums.size();
        vector<int> ans(n);

        int start = 0;
        int end = n - 1;
        int idx = n - 1;

        while(start <= end) {

            if(abs(nums[start]) > abs(nums[end])) {
                ans[idx] = nums[start] * nums[start];
                start++;
            }
            else {
                ans[idx] = nums[end] * nums[end];
                end--;
            }
            idx--;
        }

        return ans;
    }
};