class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        vector<int> row(3), col(3);
        int diag = 0, antiDiag = 0;

        for (int i = 0; i < moves.size(); i++) {
            int r = moves[i][0];
            int c = moves[i][1];

            int val = (i % 2 == 0) ? 1 : -1;

            row[r] += val;
            col[c] += val;

            if (r == c) diag += val;
            if (r + c == 2) antiDiag += val;

            if (abs(row[r]) == 3 || abs(col[c]) == 3 ||
                abs(diag) == 3 || abs(antiDiag) == 3)
                return val == 1 ? "A" : "B";
        }

        return moves.size() == 9 ? "Draw" : "Pending";
    }
};