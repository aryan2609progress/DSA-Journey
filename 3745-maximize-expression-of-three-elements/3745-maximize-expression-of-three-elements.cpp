class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        int mx = INT_MIN;
        int mn = *min_element(nums.begin(),nums.end());
        int mx1 = INT_MIN;
        for(int val : nums){
            if(val>mx){
                mx1 = mx;
                mx = val;
            }
            else if (val>mx1)
                mx1 = val;
        }
        return mx + mx1 -mn;
    }
};