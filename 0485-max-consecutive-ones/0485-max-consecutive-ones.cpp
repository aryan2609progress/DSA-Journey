class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int freq=0,ans=0;
       for(int val : nums){
        if(val==1){
        freq++;
        ans=max(freq,ans);
        }
        else
        freq=0;
       }
       return ans;
    }
};