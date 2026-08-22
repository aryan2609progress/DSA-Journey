class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {

        for (char &c : paragraph) {
            if (isalpha(c))
                c = tolower(c);
            else
                c = ' ';
        }

        stringstream ss(paragraph);
        string word;

        unordered_set<string> s(banned.begin(), banned.end());
        unordered_map<string, int> freq;

        while (ss >> word) {
            if (s.find(word) == s.end()) {
                freq[word]++;
            }
        }

        string ans;
        int maxi = 0;

        for (auto it : freq) {
            if (it.second > maxi) {
                maxi = it.second;
                ans = it.first;
            }
        }

        return ans;
    }
};