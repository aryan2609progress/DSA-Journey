class Solution {
public:
    bool isPrime(int n) {
        if (n < 2) return false;

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                return false;
        }

        return true;
    }

    bool checkPrimeFrequency(vector<int>& nums) {
        vector<int> freq(101);

        for (int x : nums)
            freq[x]++;

        for (int f : freq) {
            if (isPrime(f))
                return true;
        }

        return false;
    }
};