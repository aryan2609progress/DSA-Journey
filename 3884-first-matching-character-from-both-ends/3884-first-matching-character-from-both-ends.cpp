class Solution {
public:
    int firstMatchingIndex(string s) {
       int left=0,right=s.length()-1;
       while(left<=right){
        if(s[left]==s[right])
            return left;
            left++;
            right--;
       } 
       return -1;
    }
};