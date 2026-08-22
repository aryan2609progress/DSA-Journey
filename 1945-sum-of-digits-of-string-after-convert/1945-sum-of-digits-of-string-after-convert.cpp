class Solution {
public:
    int getLucky(string s, int k) {
        string ans;

        for(char ch : s)
            ans += to_string(ch - 'a' + 1);

        int x = 0;

        while(k--) {
            int sum = 0;

            for(char ch : ans)
                sum += ch - '0';

            x = sum;
            ans = to_string(sum);
        }
        ans.clear();
        s.clear();
        return x;
    }
};