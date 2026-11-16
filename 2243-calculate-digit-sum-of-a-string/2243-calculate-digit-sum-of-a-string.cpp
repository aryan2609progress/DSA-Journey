
class Solution {
public:
    int getSum(string s) {
        int sum = 0;

        for (char ch : s) {
            sum += ch - '0';
        }

        return sum;
    }

    string digitSum(string s, int k) {
        while (s.size() > k) {
            string ans = "";

            for (int i = 0; i < s.size(); i += k) {
                string group = s.substr(i, k);
                ans += to_string(getSum(group));
            }

            s = ans;
        }

        return s;
    }
};
