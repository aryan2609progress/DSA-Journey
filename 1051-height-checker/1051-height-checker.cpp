class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> freq(101, 0);

        
        for (int h : heights)
            freq[h]++;

        int ans = 0;
        int expected = 1;

        
        for (int h : heights) {
            while (freq[expected] == 0)
                expected++;

            if (h != expected)
                ans++;

            freq[expected]--;
        }

        return ans;
    }
};