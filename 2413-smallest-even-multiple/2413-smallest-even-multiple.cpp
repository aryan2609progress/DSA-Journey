class Solution {
public:
    int smallestEvenMultiple(int n) {
        int k = n;
      while(1){
        if(n%2==0 && n%k==0)
            return n;
        n++;
      }  
    }
};