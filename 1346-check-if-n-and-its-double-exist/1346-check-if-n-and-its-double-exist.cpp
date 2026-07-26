class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> s(arr.begin(), arr.end());

        int zero = 0;
        for (int x : arr)
            if (x == 0) zero++;

        for (int val : arr) {
            if (val == 0) {
                if (zero >= 2)
                    return true;
            }
            else if (s.count(2 * val))
                return true;
        }

        return false;
    }
};