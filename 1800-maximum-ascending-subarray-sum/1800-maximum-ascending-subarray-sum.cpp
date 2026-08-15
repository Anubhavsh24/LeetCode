class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n=nums.size();
        int right=1;
        int mxsum=nums[0];
        int sum=nums[0];
        while(right<n){
            while(right<n && nums[right]>nums[right-1]){
                sum+=nums[right];
                right++;
            }
            mxsum=max(sum,mxsum);
            sum=nums[right++];
        }
        return mxsum;
    }
};