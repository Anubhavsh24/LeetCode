class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        while(i<n){
            int correctIdx=nums[i];
            if(nums[correctIdx]==correctIdx) return correctIdx;
            else swap(nums[correctIdx],nums[i]);
        }
        return 0;
    }
};