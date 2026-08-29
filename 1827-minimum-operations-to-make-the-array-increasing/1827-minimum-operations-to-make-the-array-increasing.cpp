class Solution {
public:
    int minOperations(vector<int>& nums) {
        int prev=nums[0];
        int ans=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>prev)
                prev=nums[i];
            else{
                int dif=abs(nums[i]-prev)+1;
                ans+=dif;
                prev=nums[i]+dif;

            }
        }
        return ans;
    }
};