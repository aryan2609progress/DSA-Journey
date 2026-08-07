class Solution {
public:
    bool check(int val){
        int sum=0;
        while(val){
            sum+=val%10;
            val/=10;
        }
        if(sum%2==0) return true;
        return false;
    }
    int countEven(int num) {
        int i=1,cnt=0;
        while(i<=num){
            if(check(i))
                cnt++;
                i++;
        }
        return cnt;
    }
};