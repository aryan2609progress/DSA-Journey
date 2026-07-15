class Solution {
public:
    string removeDuplicates(string s) {
        int top = -1;

        for (char ch : s) {
            if (top >= 0 && s[top] == ch)
                top--;
            else
                s[++top] = ch;
        }

        return s.substr(0, top + 1);
    }
};