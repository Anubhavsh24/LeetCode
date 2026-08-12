class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int> suf=nums;
        for(int i=1;i<n;i++){
            nums[i]+=nums[i-1];
        }
        for(int i=n-2;i>=0;i--){
            suf[i]+=suf[i+1];
        }
        for(int i=0;i<n;i++){
            if(nums[i]==suf[i]) return i;
        }
        return -1;
    }
};