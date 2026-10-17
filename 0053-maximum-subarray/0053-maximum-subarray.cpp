class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currsum=0,maxsum=INT_MIN;
        for(int val:nums){
            currsum=max(val,currsum+val);
            maxsum=max(currsum,maxsum);
        }
        return maxsum;
    }
};