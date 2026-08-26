class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        vector<int>freq1(26,0);
        vector<int>freq2(26,0);
        for(char ch : word1)
            freq1[ch-'a']++;
        for(char ch : word2)
            freq2[ch-'a']++;
        int flag=1;
        for(int i=0;i<26;i++){
            if(abs(freq1[i]-freq2[i])>3){
                flag=0;
                break;
            }
        }
        freq1.clear();
        freq2.clear();
        if(flag)
            return true;
        else
            return false;
    }
};