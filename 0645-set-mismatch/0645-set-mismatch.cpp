class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        while(i<n){
            int corIdx=nums[i]-1;
            if(nums[i]!=nums[corIdx]) swap(nums[i],nums[corIdx]);
            else i++;
        }
        for(int j=0;j<n;j++){
            if(nums[j]!=j+1) return {nums[j],j+1};

        }
        return{};

    }
};