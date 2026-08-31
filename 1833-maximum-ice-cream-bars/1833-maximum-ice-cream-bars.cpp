class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
         int mn = *min_element(costs.begin(), costs.end());
        int mx = *max_element(costs.begin(), costs.end());

        vector<int> cnt(mx - mn + 1);

        for(int x : costs)
            cnt[x - mn]++;

        int j = 0;

        for(int i = 0; i < cnt.size(); i++)
            while(cnt[i]--)
                costs[j++] = i + mn;
        
        int ans=0,sum=0;
        for(int val : costs){
            sum+=val;
            if(sum<=coins){
                ans++;
            }
            else
            break;
        }
        return ans;
    }
};