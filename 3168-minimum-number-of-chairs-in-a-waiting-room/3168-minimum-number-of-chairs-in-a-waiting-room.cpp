class Solution {
public:
    int minimumChairs(string s) {
        int enter=0,ans=0;
        for(char ch : s){
            if(ch=='E')
                enter++;
            else{
                enter--;
            }
             ans=max(ans,enter);
                
        }
        return ans;
    }
};