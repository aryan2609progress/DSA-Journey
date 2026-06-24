class Solution {
public:
    bool isPowerOfThree(int n) {
      long long pofT= pow(3,19);

      return n >0 && pofT%n==0;  
    }
};