class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int i=0,j=0;
        int len=0,minlen=n+1;
        int sum=0;
        while(j<n){
            sum+=nums[j];
            while(sum>=target){
                minlen=min(minlen,j-i+1);
                sum-=nums[i++];
            }
            j++;
            
        }
        if(minlen==n+1) return 0;
        return minlen;
    }
};