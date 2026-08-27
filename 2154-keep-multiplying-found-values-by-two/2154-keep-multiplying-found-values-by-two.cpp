class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
       unordered_set<int>s(nums.begin(),nums.end());
       while(1){
        if(s.find(original)==s.end())
            return original;
        original*=2;
       }
       return -1; 
    }
};