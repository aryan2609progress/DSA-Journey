class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        int ans=0;
    sort(heaters.begin(), heaters.end());
        for(int house : houses){
            int distance = INT_MAX;
            int left=0,right=heaters.size()-1;
            while(left<=right){
                int mid=left+(right-left)/2;
                if(heaters[mid]==house){
                    distance=0;
                    break;
                }
                else if (heaters[mid]>house){
                    distance = min(distance,heaters[mid]-house);
                    right=mid-1;
                }
                else{
                    distance = min(distance,house - heaters[mid]);
                    left=mid+1;
                }
            }
            ans=max(ans,distance);
        }
        return ans;
    }
};