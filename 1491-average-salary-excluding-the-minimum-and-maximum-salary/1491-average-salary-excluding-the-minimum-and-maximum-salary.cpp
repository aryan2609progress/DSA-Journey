class Solution {
public:
    double average(vector<int>& salary) {
        double ans =0.0;
        int mx = *max_element(salary.begin(),salary.end());
        int mn = *min_element(salary.begin(),salary.end());
        for(int val : salary){
            if(val!=mx && val!=mn)
                ans+=(float)val;
        }
        return ans/(salary.size()-2);
    }
};