class Solution {
public:
    string sortSentence(string s) {
        stringstream ss(s);
        vector<string> arr(10);
        string word;

        while (ss >> word) {
            int pos = word.back() - '0';
            word.pop_back();
            arr[pos] = word;
        }

        string ans;

        for (int i = 1; i <= 9; i++) {
            if (arr[i] != "") {
                if (!ans.empty())
                    ans += " ";
                ans += arr[i];
            }
        }

        return ans;
    }
};