class Solution {
public:
    string defangIPaddr(string address) {
        string ans="";
        for(char ch : address){
            if(isdigit(ch))
                ans+=ch;
            else
                ans+="[.]";
        }
        return ans;
    }
};