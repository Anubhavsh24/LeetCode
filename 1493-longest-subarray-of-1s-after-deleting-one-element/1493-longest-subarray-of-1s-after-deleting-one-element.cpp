class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int zeroPos=-1;
        int  i=0,j=0;
        int maxLen=0,count=0;
        while(j<n){
            int prev=zeroPos;
            if(!nums[j]){
                count++;
                zeroPos=j;
            }
            if(count<=1) j++;
            else{
                maxLen=max(maxLen,j-i);
                i=prev+1;
                count--;
                j++;
            }
        }
        maxLen=max(maxLen,j-i);
        return maxLen-1;

    }
};