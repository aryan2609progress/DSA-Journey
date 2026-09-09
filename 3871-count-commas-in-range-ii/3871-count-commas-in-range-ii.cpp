class Solution {
public:
    long long countCommas(long long n) {
        int cnt = 0;
        long long x = n, sum = 0, p = 1000;

        while (x) cnt++, x /= 10;

        for (int i = 3; i < cnt; i += 3) {
            sum += n - p + 1;
            p *= 1000;
        }

        return sum;
    }
};