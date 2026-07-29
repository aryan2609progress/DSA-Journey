class Solution {
public:
    string reorderSpaces(string text) {
        int spaces = count(text.begin(), text.end(), ' ');

        vector<string> words;
        string word;
        stringstream ss(text);

        while (ss >> word)
            words.push_back(word);

        if (words.size() == 1)
            return words[0] + string(spaces, ' ');

        int gap = spaces / (words.size() - 1);
        int extra = spaces % (words.size() - 1);

        string ans = words[0];

        for (int i = 1; i < words.size(); i++)
            ans += string(gap, ' ') + words[i];

        return ans + string(extra, ' ');
    }
};