class Solution {
public:
    int maxPower(string s) {
        int cnt = 1, ans = 1;

        for(int i = 1; i < s.length(); i++) {
            if(s[i] == s[i-1]) {
                cnt++;
            }
            else {
                cnt = 1;
            }

            ans = max(ans, cnt);
        }

        return ans;
    }
};