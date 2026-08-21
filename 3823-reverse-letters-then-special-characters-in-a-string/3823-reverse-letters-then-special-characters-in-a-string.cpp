class Solution {
public:
    string reverseByType(string s) {
       int left=0,right=s.length()-1;
       while(left<=right){
        if(!isalpha(s[left]))
            left++;
        else if(!isalpha(s[right]))
            right--;
        else
            swap(s[left++],s[right--]);
       } 
         left=0,right=s.length()-1;
        while(left<=right){
            if(isalpha(s[left])){
                left++;
                continue;
            }
            if(isalpha(s[right])){
                right--;
                continue;
            }
            swap(s[left++],s[right--]);
        }
        return s;
    }
};