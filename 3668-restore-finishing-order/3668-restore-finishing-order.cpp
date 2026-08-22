class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
       vector<int>ans;
       unordered_set<int>s(friends.begin(),friends.end());
       for(int val : order){
        if(s.find(val)!=s.end())
            ans.push_back(val);
       } 
       return ans;
    }
};