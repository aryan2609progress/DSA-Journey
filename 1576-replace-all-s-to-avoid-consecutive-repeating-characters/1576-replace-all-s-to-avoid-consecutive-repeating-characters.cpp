class Solution {
public:
    string modifyString(string s) {
        for(int i = 0; i < s.length(); i++) {

            if(s[i] == '?') {
                for(char ch = 'a'; ch <= 'z'; ch++) {

                    if((i == 0 || s[i-1] != ch) &&
                       (i == s.length()-1 || s[i+1] != ch)) {
                        s[i] = ch;
                        break;
                    }
                }
            }
        }

        return s;
    }
};