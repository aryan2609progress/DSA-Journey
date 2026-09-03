class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        bool hasOdd = false;
        bool hasEven = false;

        int mn = *min_element(nums1.begin(), nums1.end());

        for (int x : nums1) {
            if (x % 2 == 0)
                hasEven = true;
            else
                hasOdd = true;
        }

        
        if (!hasOdd || !hasEven)
            return true;

       
        return mn % 2 == 1;
    }
};