class Solution {
public:
    bool check(string &word, vector<int>& freq) {
        for(char ch : word) {
            if(freq[ch - 'a'] == 0)
                return false;
        }
        return true;
    }

    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<int> freq(26, 0);

        for(char ch : allowed) {
            freq[ch - 'a'] = 1;
        }

        int ans = 0;

        for(string &word : words) {
            if(check(word, freq))
                ans++;
        }

        return ans;
    }
};