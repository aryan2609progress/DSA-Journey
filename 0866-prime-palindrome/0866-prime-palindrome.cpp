class Solution {
public:
    bool isPrime(int n) {
        if (n < 2)
            return false;

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                return false;
        }

        return true;
    }

    int makePalindrome(int x) {
        int result = x;
        x /= 10;

        while (x > 0) {
            result = result * 10 + x % 10;
            x /= 10;
        }

        return result;
    }

    int primePalindrome(int n) {
        if (n <= 11)
            return n <= 2 ? 2 : 
                   n <= 3 ? 3 :
                   n <= 5 ? 5 :
                   n <= 7 ? 7 : 11;

        for (int x = 10; ; x++) {
            int pal = makePalindrome(x);

            if (pal >= n && isPrime(pal))
                return pal;
        }
    }
};