class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            nums.push_back(nums[n - 1 - i]);
        }
        
        return nums;
    }
};