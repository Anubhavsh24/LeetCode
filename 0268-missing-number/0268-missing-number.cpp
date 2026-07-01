class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int ans=n;
        for(int x=0;x<n;x++){
            ans^=x^nums[x];
        }
        return ans;
    }
};