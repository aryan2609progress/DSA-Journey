class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> freq(2001, 0);

        for(int val : arr) {
            freq[val + 1000]++;
        }

        unordered_set<int> s;

        for(int f : freq) {
            if(f == 0)
                continue;

            if(s.find(f) != s.end())
                return false;

            s.insert(f);
        }

        return true;
    }
};