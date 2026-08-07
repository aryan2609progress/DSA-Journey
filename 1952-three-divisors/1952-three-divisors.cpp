class Solution {
public:
    bool isThree(int n) {
       unordered_set<int>s;
       int i=1,count=0;
       while(i<=n){
        if(n%i==0){
            if(s.find(i)!=s.end())
                return false;
            else{
                s.insert(i);
                count++;
            }
        }
        i++;
       }
       if(count==3)
        return true;
    return false; 
    }
};