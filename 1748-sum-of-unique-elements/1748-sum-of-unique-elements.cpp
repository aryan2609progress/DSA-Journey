class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
       vector<int>freq(101,0);
       for(int val: nums)
        freq[val]++;
        int sum=0;
        for(int val : nums){
            if(freq[val]==1)
                sum+=val;
        }
        return sum;
    }
};