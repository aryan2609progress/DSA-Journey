class Solution {
public:
    bool sdn (int num){
        int org = num;
        while(num!=0){
            int digit = num%10;
            if (digit==0 || org%digit!=0)
            return false;
            num/=10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        
        vector<int>ans;
        for(int i= left;i<=right;i++){
            if(sdn(i))
            ans.push_back(i);
        }
        return ans;
    }
};