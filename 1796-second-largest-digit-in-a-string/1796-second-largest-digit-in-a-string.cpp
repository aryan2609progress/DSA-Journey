class Solution {
public:
    bool digit(char ch){
        return ch >= '0' && ch <= '9';
    }

    int secondHighest(string s) {
        int mx1 = -1;
        int mx2 = -1;

        for(char ch : s){
            if(digit(ch)){
                int num = ch - '0';

                if(num > mx1){
                    mx2 = mx1;
                    mx1 = num;
                }
                else if(num != mx1 && num > mx2){
                    mx2 = num;
                }
            }
        }

        return mx2;
    }
};