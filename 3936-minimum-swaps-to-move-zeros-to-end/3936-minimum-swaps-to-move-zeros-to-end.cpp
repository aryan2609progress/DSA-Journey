class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int j = nums.size() - 1;
        int cnt = 0;

        for(int i = 0; i < nums.size(); i++) {

            while(i < j && nums[j] == 0) {
                j--;
            }

            if(i < j && nums[i] == 0) {
                swap(nums[i], nums[j]);
                cnt++;
                j--;
            }
        }

        return cnt;
    }
};