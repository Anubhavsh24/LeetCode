class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int hi=nums.size()-1;
        int lo=0;
        int mid;
        while(lo<=hi){
            mid=lo+(hi-lo)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target) lo=mid+1;
            else hi=mid-1;
        }
        return lo;
    }
};