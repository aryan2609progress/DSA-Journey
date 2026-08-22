class Solution {
public:
    bool checkDivisibility(int n) {
        int digitsum=0,pro=1;
        int num=n;
        while(n>0){
           int digit=n%10;
           digitsum+=digit;
            pro*=digit;
            n/=10;
        }
        if(num%(pro+digitsum)==0)
            return true;
        return false;
    }
};