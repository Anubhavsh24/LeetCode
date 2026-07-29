class Solution {
public:
    int partition(vector<int>& nums,int si,int ei){
        int pi=nums[ei];
        int i=si;
        for(int j=si;j<ei;j++){
            if(nums[j]<pi){
                swap(nums[j],nums[i++]);
            }
        }
        swap(nums[i],nums[ei]);
        return i;
    }
    int QuickSelect(vector<int>& nums,int si,int ei,int target){
        if(ei==si) return nums[si];
        int pi=partition(nums,si,ei);
        if(pi==target) return nums[pi];
        else if(pi<target) return QuickSelect(nums,pi+1,ei,target);
        else return QuickSelect(nums,si,pi-1,target);
    }
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
        int target=n-k;
        return QuickSelect(nums,0,n-1,target);
    }
};