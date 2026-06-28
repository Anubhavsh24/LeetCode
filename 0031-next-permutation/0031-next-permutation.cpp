class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int idx=-1;
        int i;
        for(i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                idx=i;
                break;
            }
        }
        if(idx==-1){
            reverse(nums.begin(),nums.end());
        }
        else{
            reverse(nums.begin()+idx+1,nums.end());
            int min=i;
            for(int j=i+1;j<n;j++){
                if(nums[j]>nums[idx]){
                    min=j;
                    break;
                }
            }
            swap(nums[idx],nums[min]);
        }
        
    }
};