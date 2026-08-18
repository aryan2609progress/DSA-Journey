class Solution {
public:
    int check(string &word, vector<int>& freq) {
        int temp[26] = {};

        for(char ch : word) {
            int idx = ch - 'a';
            temp[idx]++;

            if(temp[idx] > freq[idx])
                return 0;
        }

        return word.size();
    }

    int countCharacters(vector<string>& words, string chars) {
        vector<int> freq(26, 0);

        for(char ch : chars)
            freq[ch - 'a']++;

        int sum = 0;

        for(string &word : words)
            sum += check(word, freq);

        return sum;
    }
};