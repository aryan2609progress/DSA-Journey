class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        unordered_set<int> s;

        for (auto &r : ranges) {
            for (int i = r[0]; i <= r[1]; i++)
                s.insert(i);
        }

        for (int i = left; i <= right; i++) {
            if (s.find(i) == s.end())
                return false;
        }

        return true;
    }
};