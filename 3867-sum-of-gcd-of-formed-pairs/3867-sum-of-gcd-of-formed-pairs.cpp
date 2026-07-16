class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int>ans;
        int maxx=nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxx)
                maxx=nums[i];
            ans.push_back(gcd(nums[i],maxx));
        }
        sort(ans.begin(),ans.end());
        long long sum = 0;
        int st=0,end=ans.size()-1;
        while(st<end){
            sum+=gcd(ans[st],ans[end]);
            st++;
            end--;
        }
        return sum;
    }
};