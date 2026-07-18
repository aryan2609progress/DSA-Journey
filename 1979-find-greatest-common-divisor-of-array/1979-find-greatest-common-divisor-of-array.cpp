class Solution {
public:
    int findGCD(vector<int>& nums) {
        int Max=nums[0],Min=nums[0];
        for(int val : nums){
            if(val> Max)
                Max = val;
            if(val<Min)
                Min = val;
        }
        return gcd(Min,Max);
    }
};