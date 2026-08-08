class Solution {
public:

    int negative(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] < 0)
                left = mid + 1;
            else
                right = mid - 1;
        }

        return left;
    }

    int positive(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] > 0)
                right = mid - 1;
            else
                left = mid + 1;
        }

        return nums.size() - left;
    }

    int maximumCount(vector<int>& nums) {
        int neg = negative(nums);
        int pos = positive(nums);

        return max(neg, pos);
    }
};