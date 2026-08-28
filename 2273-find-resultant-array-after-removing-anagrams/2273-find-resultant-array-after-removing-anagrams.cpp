class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> ans;
        ans.push_back(words[0]);

        for (int i = 1; i < words.size(); i++) {
            if (getFreq(ans.back()) != getFreq(words[i])) {
                ans.push_back(words[i]);
            }
        }

        return ans;
    }

    vector<int> getFreq(string s) {
        vector<int> freq(26, 0);

        for (char ch : s) {
            freq[ch - 'a']++;
        }

        return freq;
    }
};