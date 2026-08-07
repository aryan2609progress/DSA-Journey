class Solution {
public:
bool check(int num){
    while(num){
        int dig = num%10;
        if(dig==0)
            return false;
        num/=10;
    }
    return true;
}
    vector<int> getNoZeroIntegers(int n) {
        int i=1;
        while(i<=n){
            if(check(i)){
                if(check(n-i)){
                    return {i,n-i};
                }
            }
            i++;
        }
        return {-1,-1};
    }
};