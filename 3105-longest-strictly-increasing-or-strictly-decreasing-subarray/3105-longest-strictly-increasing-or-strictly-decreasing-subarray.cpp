class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();
        int inc=1,dec=1,ans=1;
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                dec=1;
                inc++;
            }
            else if(nums[i]<nums[i-1]){
                inc=1;
                dec++;
            }
            else{
                inc=1;
                dec=1;
            }
            ans=max(ans,max(inc,dec));
        }
        return ans;
        
    }
};