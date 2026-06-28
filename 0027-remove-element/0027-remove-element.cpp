class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        for(int ele : nums){
            if(ele!=val){
                nums[count]=ele ;
                count++;
            }
        }
        
        return count;
    }
};