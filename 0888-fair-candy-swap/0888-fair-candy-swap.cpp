class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sum1 = 0, sum2 = 0;

        for (int x : aliceSizes) sum1 += x;
        for (int x : bobSizes) sum2 += x;

        int diff = (sum1 - sum2) / 2;

        unordered_set<int> st(aliceSizes.begin(), aliceSizes.end());

        for (int b : bobSizes) {
            int a = b + diff;

            if (st.count(a)) {
                return {a, b};
            }
        }

        return {};
    }
};