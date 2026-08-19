class Solution {
public:
    string greatestLetter(string s) {
        unordered_set<char> d(s.begin(), s.end());
        string ans = "";

        for(char ch : s) {
            if(islower(ch)) {
                if(d.find(toupper(ch)) != d.end()) {
                    ans = max(ans, string(1, toupper(ch)));
                }
            }
        }

        return ans;
    }
};