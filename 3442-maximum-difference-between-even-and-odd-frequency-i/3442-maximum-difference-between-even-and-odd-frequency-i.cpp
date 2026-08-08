class Solution {
public:
    int maxDifference(string s) {
        vector<int> freq(26, 0);

        for(char ch : s)
            freq[ch - 'a']++;

        int maxOdd = INT_MIN;
        int minEven = INT_MAX;

        for(int x : freq) {
            if(x == 0) continue;

            if(x % 2)
                maxOdd = max(maxOdd, x);
            else
                minEven = min(minEven, x);
        }

        return maxOdd - minEven;
    }
};