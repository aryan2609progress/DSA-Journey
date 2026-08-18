class Solution {
public:
    bool digitCount(string num) {
        vector<int>nums,freq(10,0);
        for(char ch : num){
            nums.push_back(ch - '0');
        }
        for(int val : nums){
            freq[val]++;
        }
        for(int i=0;i<nums.size();i++){
            if(freq[i]!=nums[i])
                return false;
        }
        return true;
    }
};