class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int lo=1;
        int hi=n-1;
        int mid;
        int count;
        while(lo<=hi){
            mid=lo+(hi-lo)/2;
            count=0;
            for(int x : nums){
                if(x<=mid) ++count;
            }
            if(count<=mid) lo=mid+1;
            else hi=mid-1;
        }
        return lo;

    }
};