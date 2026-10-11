class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums.size()%(i+1)==0){
                int dig=(nums[i]*nums[i]);
                sum+=dig;
            }
        }
        return sum;
    }
};