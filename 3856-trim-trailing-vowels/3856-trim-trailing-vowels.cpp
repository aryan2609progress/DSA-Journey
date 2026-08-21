class Solution {
public:
    bool vowel(char ch){
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        return true;
    return false;
    }

    string trimTrailingVowels(string s) {
      for(int i=s.size()-1;i>=0;i--){
        if(!vowel(s[i]))
            break;
        s.pop_back();
      }  
        return s;
    }
};