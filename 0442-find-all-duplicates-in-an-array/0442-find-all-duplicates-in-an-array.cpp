class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        int i=0;
        while(i<n){
            int corIdx=nums[i]-1;
            if(nums[i]!=nums[corIdx]) swap(nums[i],nums[corIdx]);
            else i++;
        }
        for(i=0;i<n;i++){
            if(nums[i]!=i+1) ans.push_back(nums[i]);
        }
        return ans;
    }
};