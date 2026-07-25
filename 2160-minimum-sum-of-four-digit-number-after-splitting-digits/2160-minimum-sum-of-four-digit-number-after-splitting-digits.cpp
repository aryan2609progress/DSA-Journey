class Solution {
public:
    int minimumSum(int num) {
        string s = to_string(num);
        sort(s.begin(),s.end());
        int left=0,right=s.length()-1;
        int ans =0;
        while(left<right){
            string l = "";
           l+= s[left];
           l+=+s[right];
            ans+=stoi(l);
            left++;
            right--;
        }
        return ans;
    }
};