class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        int ans = 0;

        for(int i = 0; i < m; i++) {
            int left = 0, right = n - 1;
            int idx = n;

            while(left <= right) {
                int mid = left + (right - left) / 2;

                if(grid[i][mid] < 0) {
                    idx = mid;
                    right = mid - 1;
                }
                else {
                    left = mid + 1;
                }
            }

            ans += n - idx;
        }

        return ans;
    }
};
