class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
       int w=0,score=0;
       for(string ch : events){
        if(ch=="W"){
            w++;
            if(w==10)
                break;
            }
        else if(ch=="WD" || ch =="NB")
            score++;
        else
            score+=stoi(ch);
       } 
       return {score,w};
    }
};