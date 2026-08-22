class Solution {
public:
    int minimumMoves(string s) {
        int cnt = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'X') {
                cnt++;
                i += 2;
            }
        }
        s.clear();
        return cnt;
    }
};