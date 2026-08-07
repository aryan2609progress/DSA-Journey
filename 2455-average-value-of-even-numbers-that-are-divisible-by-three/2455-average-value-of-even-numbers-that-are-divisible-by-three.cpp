class Solution {
public:
    int averageValue(vector<int>& nums) {
        int cnt=0,sum=0;
        for(int val : nums){
            if(val%2==0 && val%3==0){
                sum+=val;
                cnt++;
            }
        }
        if(cnt==0) return 0;
        return (sum)/cnt ;
    }
};