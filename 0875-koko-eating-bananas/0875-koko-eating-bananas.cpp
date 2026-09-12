class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int mx = *max_element(piles.begin(), piles.end());
        int start = 1;
        int ans = mx;

        while(start <= mx) {
            int mid = start + (mx - start) / 2;
            long long hours = 0;

            for(int x : piles)
                hours += (x + mid - 1) / mid;

            if(hours <= h) {
                ans = mid;
                mx = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }

        return ans;
    }
};