class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<bool> used(nums.size());
        vector<int> path;
        bt(nums, used, path);
        return res;
    }
    void bt(vector<int>& n, vector<bool>& u, vector<int>& p) {
        if (p.size() == n.size()) { res.push_back(p); return; }
        for (int i = 0; i < n.size(); i++) {
            if (u[i] || (i && n[i] == n[i-1] && !u[i-1])) continue;
            u[i] = 1; p.push_back(n[i]);
            bt(n, u, p);
            p.pop_back(); u[i] = 0;
        }
    }
};