class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int>freq(501,0);
        for(int val : arr){
            freq[val]++;
        }
        int ans=-1;
        for(int val : arr){
            if(val==freq[val]){
                ans=max(ans,val);
            }
        }
        return ans;
    }
};