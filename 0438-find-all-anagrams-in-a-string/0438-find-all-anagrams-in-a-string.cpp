class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;

        int k = p.length();

        // p bada hai, to koi anagram possible nahi
        if(s.length() < p.length())
            return ans;

        vector<int> freqP(26, 0);
        vector<int> freqS(26, 0);

        // p ki frequency
        for(char c : p) {
            freqP[c - 'a']++;
        }

        // First window
        for(int i = 0; i < k; i++) {
            freqS[s[i] - 'a']++;
        }

        // Sliding window
        for(int i = 0; i <= s.length() - k; i++) {

            if(freqS == freqP) {
                ans.push_back(i);
            }

            if(i + k < s.length()) {
                freqS[s[i] - 'a']--;
                freqS[s[i + k] - 'a']++;
            }
        }

        return ans;
    }
};