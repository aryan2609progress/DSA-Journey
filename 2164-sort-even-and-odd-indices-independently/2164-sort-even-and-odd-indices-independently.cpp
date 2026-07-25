class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> even, odd;

        for (int i = 0; i < nums.size(); i++) {
            if (i & 1)
                odd.push_back(nums[i]);
            else
                even.push_back(nums[i]);
        }

        sort(even.begin(), even.end());
        sort(odd.rbegin(), odd.rend());   
        int e = 0, o = 0;

        for (int i = 0; i < nums.size(); i++) {
            nums[i] = (i & 1) ? odd[o++] : even[e++];
        }

        return nums;
    }
};