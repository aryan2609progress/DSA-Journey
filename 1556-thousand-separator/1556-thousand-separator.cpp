class Solution {
public:
    string thousandSeparator(int n) {
       if(n<1000)
        return to_string(n);
        string ans = to_string(n);
        int cnt=0;
        for(int i=ans.size()-1;i>0;i--){
             cnt++;
            if(cnt==3){
                ans.insert(i,1,'.');
                cnt=0;
            }
        }
    return ans;
    }
};