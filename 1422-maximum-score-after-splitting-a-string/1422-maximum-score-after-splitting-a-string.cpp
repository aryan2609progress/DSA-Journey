class Solution {
public:
    int maxScore(string s) {
        int zero = 0, ones = 0;

        for(char ch : s) {
            if(ch == '1')
                ones++;
        }

        int mx = 0;

        for(int i = 0; i < s.length() - 1; i++) {
            if(s[i] == '0')
                zero++;
            else
                ones--;

            mx = max(mx, zero + ones);
        }

        return mx;
    }
};