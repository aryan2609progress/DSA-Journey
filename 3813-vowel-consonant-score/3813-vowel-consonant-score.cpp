class Solution {
public:
    bool vowel(char ch){
        if(ch=='a' || ch== 'e' || ch=='i' || ch=='u' || ch=='o')
            return true;
        return false;
    }
    int vowelConsonantScore(string s) {
        int v=0,c=0;
        for(int i=s.length()-1;i>=0;i--){
            if(vowel(s[i]))
                v++;
            else if(isalpha(s[i]))
                c++;
            s.pop_back();
        }
        if(c>0)
            return floor(v/c);
        return c;
    }
};