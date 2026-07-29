class Solution {
public:
    int numDifferentIntegers(string word) {
        set<string> st;
        string num = "";

        for (char ch : word) {
            if (isdigit(ch))
                num += ch;
            else if (!num.empty()) {
                int i = 0;
                while (i < num.size() && num[i] == '0') i++;
                st.insert(i == num.size() ? "0" : num.substr(i));
                num = "";
            }
        }

        if (!num.empty()) {
            int i = 0;
            while (i < num.size() && num[i] == '0') i++;
            st.insert(i == num.size() ? "0" : num.substr(i));
        }

        return st.size();
    }
};