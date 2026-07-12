class Solution {
public:
    bool isVowel(char ch) {
        ch = tolower(ch);

        return ch=='a' || ch=='e' || ch=='i' ||
               ch=='o' || ch=='u';
    }

    string reverseVowels(string s) {

        int start = 0;
        int end = s.length() - 1;

        while(start < end){

            if(!isVowel(s[start])){
                start++;
                continue;
            }

            if(!isVowel(s[end])){
                end--;
                continue;
            }

            swap(s[start], s[end]);
            start++;
            end--;
        }

        return s;
    }
};