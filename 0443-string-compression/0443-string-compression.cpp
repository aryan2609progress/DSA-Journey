class Solution {
public:
    int compress(vector<char>& chars) {
        int Idx=0;
        for(int i=0;i<chars.size();i++){
            char ch = chars[i];
            int count=0;
            while(i < chars.size() && chars[i]==ch ){
                count++;
                i++;
            }

            if(count == 1){
                chars[Idx++] = ch;
            }
            else{
                chars[Idx++]= ch;
                string digit = to_string(count);
                for(char dig : digit){
                    chars[Idx++] = dig;
                }

            }
            i--;
        }
        chars.resize(Idx);
        return Idx;
    }
};