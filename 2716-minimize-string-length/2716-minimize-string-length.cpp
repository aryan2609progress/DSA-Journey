class Solution {
public:
    int minimizedStringLength(string s) {
        unordered_set<char>d(s.begin(),s.end());
        return d.size();
        
    }
};