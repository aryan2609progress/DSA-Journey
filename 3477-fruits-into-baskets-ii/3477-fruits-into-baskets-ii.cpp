class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int unplaced = 0;

        for (int fruit : fruits) {
            bool placed = false;

            for (int i = 0; i < baskets.size(); i++) {
                if (baskets[i] >= fruit) {
                    baskets[i] = -1;   // basket used
                    placed = true;
                    break;
                }
            }

            if (!placed)
                unplaced++;
        }

        return unplaced;
    }
};