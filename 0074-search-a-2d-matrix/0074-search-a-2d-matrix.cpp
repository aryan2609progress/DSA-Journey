class Solution {
public:
    bool istrue(vector<vector<int>>& matrix, int target, int row) {
        int st = 0;
        int end = matrix[0].size() - 1;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (matrix[row][mid] == target)
                return true;
            else if (target > matrix[row][mid])
                st = mid + 1;
            else
                end = mid - 1;
        }

        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int stRow = 0;
        int endRow = matrix.size() - 1;
        int n = matrix[0].size();

        while (stRow <= endRow) {
            // Bug fixed here
            int mid = stRow + (endRow - stRow) / 2;

            if (target >= matrix[mid][0] && target <= matrix[mid][n - 1]) {
                return istrue(matrix, target, mid);
            }
            else if (target > matrix[mid][n - 1]) {
                stRow = mid + 1;
            }
            else {
                endRow = mid - 1;
            }
        }

        return false;
    }
};