class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if (nums.size() < 3)
            return -1;

        int a = nums[0], b = nums[1], c = nums[2];

        if ((a < b && b < c) || (c < b && b < a))
            return b;

        if ((b < a && a < c) || (c < a && a < b))
            return a;

        return c;
    }
};