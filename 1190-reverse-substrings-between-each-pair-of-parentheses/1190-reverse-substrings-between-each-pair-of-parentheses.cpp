class Solution {
public:
    string reverseParentheses(string s) {
        int n = s.size();
        vector<int> pair(n);
        stack<int> st;

        for(int i = 0; i < n; i++) {
            if(s[i] == '(')
                st.push(i);
            else if(s[i] == ')') {
                pair[i] = st.top();
                pair[st.top()] = i;
                st.pop();
            }
        }

        string ans = "";
        int i = 0;
        int dir = 1;

        while(i < n) {
            if(s[i] == '(' || s[i] == ')') {
                i = pair[i];
                dir = -dir;
            }
            else {
                ans += s[i];
            }

            i += dir;
        }

        return ans;
    }
};