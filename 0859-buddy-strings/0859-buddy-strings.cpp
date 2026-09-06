class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if (s.size() != goal.size())
            return false;

        int i = -1, j = -1;

        for (int k = 0; k < s.size(); k++) {
            if (s[k] != goal[k]) {
                if (i == -1)
                    i = k;
                else if (j == -1)
                    j = k;
                else
                    return false;
            }
        }

        // Same strings
        if (i == -1) {
            bool freq[26] = {};

            for (char c : s) {
                if (freq[c - 'a'])
                    return true;

                freq[c - 'a'] = true;
            }

            return false;
        }

        // Only one difference
        if (j == -1)
            return false;

        // Two differences
        return s[i] == goal[j] && s[j] == goal[i];
    }
};