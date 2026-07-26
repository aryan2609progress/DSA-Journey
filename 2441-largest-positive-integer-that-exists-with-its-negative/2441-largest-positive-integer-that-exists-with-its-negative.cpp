class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int mx = -1;
        unordered_set<int>s(nums.begin(),nums.end());
        for(int val : nums){
            if(s.find(-val)!=s.end())
                mx = max(mx,val);
        }
        return mx;
    }
};