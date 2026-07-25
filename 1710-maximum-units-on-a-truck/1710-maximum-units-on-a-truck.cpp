class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {

        sort(boxTypes.begin(), boxTypes.end(),
             [](const auto &a, const auto &b) {
                 return a[1] > b[1];
             });

        int ans = 0;

        for (const auto &box : boxTypes) {
            if (truckSize == 0) break;

            int take = min(truckSize, box[0]);
            ans += take * box[1];
            truckSize -= take;
        }

        return ans;
    }
};