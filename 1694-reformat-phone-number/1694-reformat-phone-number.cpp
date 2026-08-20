class Solution {
public:
    string reformatNumber(string number) {
        string ans = "";
        
        for(char ch : number) {
            if(isdigit(ch))
                ans.push_back(ch);
        }

        string result = "";
        int n = ans.length();
        int i = 0;

        
        while(n - i > 4) {
            result.push_back(ans[i++]);
            result.push_back(ans[i++]);
            result.push_back(ans[i++]);
            result.push_back('-');
        }

        
        int rem = n - i;

        if(rem == 4) {
            result.push_back(ans[i++]);
            result.push_back(ans[i++]);
            result.push_back('-');
            result.push_back(ans[i++]);
            result.push_back(ans[i++]);
        }
        else {
            while(i < n) {
                result.push_back(ans[i++]);
            }
        }

        return result;
    }
};