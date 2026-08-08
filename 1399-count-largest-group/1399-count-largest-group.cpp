class Solution {
public:
    int Sum(int num){
        int dig=0;
        while(num){
            dig+=num%10;
            num/=10;
        }
        return dig;
    }
    int countLargestGroup(int n) {
        vector<int>freq(37,0);
        for(int i=1;i<=n;i++){
            int d = Sum(i);
            freq[d]++;
        }
        int mx = *max_element(freq.begin(),freq.end());
        int cnt=0;
        for(int x : freq)
            if(x==mx)
                cnt++;
        return cnt;
    }
};