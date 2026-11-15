
class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int sum = 0, odd = 0, even = 1;
        int ans = 0, mod = 1e9 + 7;

        for (int x : arr) {
            sum += x;

            if (sum % 2 == 0) {
                ans = (ans + odd) % mod;
                even++;
            }
            else {
                ans = (ans + even) % mod;
                odd++;
            }
        }

        return ans;
    }
};
