class Solution {
public:
    pair<int,int> solve(string s) {
        int sum = 0, x = 0;
        int sign = 1;

        for (int i = 0; i < s.size();) {
            if (s[i] == '+') {
                sign = 1;
                i++;
            }
            else if (s[i] == '-') {
                sign = -1;
                i++;
            }
            else {
                int num = 0;
                bool hasNum = false;

                while (i < s.size() && isdigit(s[i])) {
                    num = num * 10 + (s[i] - '0');
                    i++;
                    hasNum = true;
                }

                if (i < s.size() && s[i] == 'x') {
                    x += sign * (hasNum ? num : 1);
                    i++;
                }
                else {
                    sum += sign * num;
                }

                sign = 1;
            }
        }

        return {x, sum};
    }

    string solveEquation(string equation) {
        int pos = equation.find('=');

        string left = equation.substr(0, pos);
        string right = equation.substr(pos + 1);

        auto [x1, s1] = solve(left);
        auto [x2, s2] = solve(right);

        int x = x1 - x2;
        int sum = s2 - s1;

        if (x == 0 && sum == 0)
            return "Infinite solutions";

        if (x == 0)
            return "No solution";

        return "x=" + to_string(sum / x);
    }
};