class Solution {
public:
    string greatestLetter(string s) {
        bool lower[26] = {};
        bool upper[26] = {};

        for(char ch : s) {
            if(islower(ch))
                lower[ch - 'a'] = true;
            else
                upper[ch - 'A'] = true;
        }

        for(int i = 25; i >= 0; i--) {
            if(lower[i] && upper[i])
                return string(1, 'A' + i);
        }

        return "";
    }
};