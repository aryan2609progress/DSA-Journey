class Solution {
public:
    int calculate(string s) {

        vector<int> st;

        int num = 0;
        char sign = '+';

        for (int i = 0; i < s.length(); i++) {

            // Build the current number
            if (isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
            }

            // Process when operator or end of string is reached
            if ((!isdigit(s[i]) && s[i] != ' ') ||
                i == s.length() - 1) {

                if (sign == '+') {
                    st.push_back(num);
                }
                else if (sign == '-') {
                    st.push_back(-num);
                }
                else if (sign == '*') {
                    st.back() *= num;
                }
                else if (sign == '/') {
                    st.back() /= num;
                }

                sign = s[i];
                num = 0;
            }
        }

        int ans = 0;

        for (int x : st) {
            ans += x;
        }

        return ans;
    }
};