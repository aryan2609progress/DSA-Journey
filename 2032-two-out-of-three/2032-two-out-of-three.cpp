class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int>ans;
        unordered_set<int>s1(nums1.begin(),nums1.end());
        unordered_set<int>s2(nums2.begin(),nums2.end());
        unordered_set<int>s3(nums3.begin(),nums3.end());
        for(int val : s1){
            if(s2.find(val)!=s2.end() || s3.find(val)!=s3.end())
                ans.push_back(val);
        }
        for(int val : s2){
            if(s3.find(val)!=s3.end() && s1.find(val)==s1.end())
                ans.push_back(val);
        }
        return ans;
    }
};