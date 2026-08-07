class Solution {
public:
    int alternateDigitSum(int n) {
        int sum = 0;
        int sign = 1;
        int digits = 0;

        while(n){
            sum += (n % 10) * sign;
            sign *= -1;
            digits++;
            n /= 10;
        }

        if(digits % 2 == 0)
            sum = -sum;

        return sum;
    }
};