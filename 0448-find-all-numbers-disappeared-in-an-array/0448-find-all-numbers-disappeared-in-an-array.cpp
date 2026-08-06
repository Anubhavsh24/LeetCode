class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        int i=0;
        while(i<n){
            int currIdx=nums[i]-1;
            if(nums[i]==nums[currIdx]) i++;
            else swap(nums[currIdx],nums[i]);
        }
        for(int j=0;j<n;j++){
            if(nums[j]!=j+1) ans.push_back(j+1);
        }
        return ans;
    }
};