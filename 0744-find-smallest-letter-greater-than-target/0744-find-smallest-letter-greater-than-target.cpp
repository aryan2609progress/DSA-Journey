class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int left = 0, right = letters.size() - 1;
        char ans = '{';      // '{' > 'z'

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (letters[mid] > target) {
                ans = letters[mid];
                right = mid - 1;     // aur chhota valid answer dhoondo
            } else {
                left = mid + 1;
            }
        }

        return (ans == '{') ? letters[0] : ans;
    }
};