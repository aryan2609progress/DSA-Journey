class Solution {
public:
    int maxProduct(vector<int>& nums){
        int first = INT_MIN;
        int second = INT_MIN;
        for(int val : nums){
            if(val > first){
                second = first;
                first = val;
            }
            else if(val > second){
                second = val;
            }
        }
        return (first-1)*(second-1);
    }
};