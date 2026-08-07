class Solution {
public:
    int D(int n){
        int sm=0;
        while(n){
            sm+=n%10;
            n/=10;
        }
        return sm;
    }
    int differenceOfSum(vector<int>& nums) {
        int sum = 0,dig_sum=0;
        for(int val : nums){
            sum+=val;
            dig_sum += D(val);
        }
        return abs(sum-dig_sum);
    }
};