class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int k=1;
        int flips=0,i=0,j=0;
        int len,maxlen=INT_MIN;
        while(j<n){
            if(nums[j]) j++;
            else{
                if(flips<k){
                    flips++;
                    j++;
                }
                else{
                    len=j-i;
                    maxlen=max(len,maxlen);
                    while(nums[i]) i++;
                    i++;
                    j++;
                    
                }

            }
        }
        len=j-i;
        maxlen=max(len,maxlen);
        
        return maxlen-1;

        
    }
};