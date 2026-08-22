class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int cnt=0;
        for(string ch : operations){
            if(ch=="++X" || ch=="X++")
                cnt++;
            else
                cnt--;
        }
        operations.clear();
        return cnt;
    }
};