class Solution {
public:
    string capitalizeTitle(string title) {
        stringstream ss(title);
        string word;
        string ans = "";

        while(ss >> word) {
            if(word.length() <= 2) {
                for(char &c : word)
                    c = tolower(c);
            }
            else {
                word[0] = toupper(word[0]);

                for(int i = 1; i < word.length(); i++)
                    word[i] = tolower(word[i]);
            }

            if(!ans.empty())
                ans += " ";

            ans += word;
        }

        return ans;
    }
};