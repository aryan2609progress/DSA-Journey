class Solution {
public:
    int maxFreqSum(string s) {
        vector<int>freq(26,0);
        for(char ch : s){
            freq[ch-'a']++;
        }
        int maxvowel=0,maxcons=0;
        for(char ch : s){
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                maxvowel=max(maxvowel,freq[ch-'a']);
            else
                maxcons = max(maxcons,freq[ch-'a']);
        }
        return maxcons + maxvowel;
    }
};