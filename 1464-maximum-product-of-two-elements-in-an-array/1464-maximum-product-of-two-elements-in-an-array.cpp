class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int mx1=INT_MIN;
       int mx2=INT_MIN;
       for(int val : nums){
        if(val>mx1){
            mx2=mx1;
            mx1=val;
        }
        else if(val>mx2)
            mx2=val;
       }
        return  (mx1-1)*(mx2-1);
    }
};