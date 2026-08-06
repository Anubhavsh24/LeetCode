class Solution {
public: // By Cyclic Sort Method -2
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        while(i<n){
            int ci=nums[i];
            if(ci==i || nums[i]==n) i++;
            else swap(nums[i],nums[ci]);
        }
        for(int j=0;j<n;j++){
            if(nums[j]!=j) return j;
        }
        return n;
    }
};