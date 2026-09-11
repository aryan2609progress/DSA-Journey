class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        vector<int> freq(10, 0);

        for(int x : digits)
            freq[x]++;

        int ans = 0;

        for(int num = 100; num <= 999; num++) {
            if(num % 2 != 0) continue;

            vector<int> temp = freq;

            int a = num / 100;
            int b = (num / 10) % 10;
            int c = num % 10;

            temp[a]--;
            temp[b]--;
            temp[c]--;

            if(temp[a] >= 0 && temp[b] >= 0 && temp[c] >= 0)
                ans++;
        }

        return ans;
    }
};