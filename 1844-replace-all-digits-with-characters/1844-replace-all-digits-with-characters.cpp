class Solution {
public:
    string replaceDigits(string s) {
       string ans = "";
       for(int i=0;i<s.length();i++){
        if(isalpha(s[i]))
            ans+=s[i];
        else{
            int dig = s[i] - '0';
            ans+=s[i-1]+dig;

        }
       } 
       return ans;
    }
};