class Solution {
public:
    int D(int n){
        int sum=0;
        while(n){
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int Sum = D(x);
        if(x%Sum==0)
            return Sum;
        return -1;
    }
};