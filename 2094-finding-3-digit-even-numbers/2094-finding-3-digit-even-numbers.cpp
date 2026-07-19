class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> freq(10, 0);

        for (int d : digits)
            freq[d]++;

        vector<int> ans;

        for (int num = 100; num <= 998; num += 2) {

            vector<int> cnt(10, 0);

            cnt[num / 100]++;
            cnt[(num / 10) % 10]++;
            cnt[num % 10]++;

            bool ok = true;

            for (int i = 0; i < 10; i++) {
                if (cnt[i] > freq[i]) {
                    ok = false;
                    break;
                }
            }

            if (ok)
                ans.push_back(num);
        }

        return ans;
    }
};