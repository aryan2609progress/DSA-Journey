class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> source;

        for (auto &p : paths)
            source.insert(p[0]);

        for (auto &p : paths) {
            if (source.find(p[1]) == source.end())
                return p[1];
        }

        return "";
    }
};