class Solution {
public:
    int N(int n, int m){
        int sum=0;
        for(int i=1;i<=n;i++){
            if(i%m!=0)
                sum+=i;
        }
        return sum;
    }
    int differenceOfSums(int n, int m) {
        int num2 = N(n,m);
        int num1 = (n)*(n+1)/2;
        return 2*num2-num1;
    }
};