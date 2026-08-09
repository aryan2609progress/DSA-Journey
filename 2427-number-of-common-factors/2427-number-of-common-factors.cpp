class Solution {
public:
    int countFactors(int n) {
        int cnt = 0;

        for(int i = 1; i <= n; i++) {
            if(n % i == 0)
                cnt++;
        }

        return cnt;
    }

    int commonFactors(int a, int b) {
        int g = gcd(a, b);
        return countFactors(g);
    }
};