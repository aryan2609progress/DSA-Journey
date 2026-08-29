class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
     int mn1=INT_MAX;   
     int mn2=INT_MAX;  
     for(int val : prices){
        if(val<mn1){
            mn2=mn1;
            mn1=val;
        }
        else if(val<mn2)
            mn2=val;
        }
        if((mn1+mn2)<=money)
            return money-(mn1+mn2);
        else
           return  money; 
    }
};