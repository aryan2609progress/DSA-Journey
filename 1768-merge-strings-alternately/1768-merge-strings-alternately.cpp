class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0, j = 0;
        string ans = "";

        while(i < word1.size() && j < word2.size()) {
            ans += word1[i++];
            ans += word2[j++];
        }

        int k = max(word1.size(), word2.size());

        for(int l = min(word1.size(), word2.size()); l < k; l++) {
            if(word1.size() > word2.size())
                ans += word1[l];
            else
                ans += word2[l];
        }

        return ans;
    }
};