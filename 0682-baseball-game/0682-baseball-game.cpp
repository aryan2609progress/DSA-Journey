class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> temp;

        for (string val : operations) {

            if (val == "C") {
                temp.pop_back();
            }
            else if (val == "D") {
                temp.push_back(2 * temp.back());
            }
            else if (val == "+") {
                int n = temp.size();
                temp.push_back(temp[n - 1] + temp[n - 2]);
            }
            else {
                temp.push_back(stoi(val));
            }
        }

        return accumulate(temp.begin(), temp.end(), 0);
    }
};