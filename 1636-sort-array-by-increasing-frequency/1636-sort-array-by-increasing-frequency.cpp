class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        
        vector<int> freq(201, 0);

        for (int x : nums) {
            freq[x + 100]++;
        }

        vector<pair<int, int>> pairs;

        for (int x = -100; x <= 100; x++) {
            if (freq[x + 100] > 0) {
                pairs.push_back({freq[x + 100], x});
            }
        }

        // Sort by:
        // 1. Frequency increasing
        // 2. Value decreasing
        sort(pairs.begin(), pairs.end(), [](auto a, auto b) {
            if (a.first == b.first)
                return a.second > b.second;

            return a.first < b.first;
        });

        vector<int> ans;

        for (auto p : pairs) {
            for (int i = 0; i < p.first; i++) {
                ans.push_back(p.second);
            }
        }

        return ans;
    }
};