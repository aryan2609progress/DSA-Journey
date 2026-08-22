class Solution {
public:
    int countValidWords(string sentence) {
        stringstream ss(sentence);
        string word;
        int cnt = 0;

        regex pattern("^[a-z]+(-[a-z]+)?[!.,]?$|^[!.,]$");

        while (ss >> word) {
            if (regex_match(word, pattern))
                cnt++;
        }

        return cnt;
    }
};