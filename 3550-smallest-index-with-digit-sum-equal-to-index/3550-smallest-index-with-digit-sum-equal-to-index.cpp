class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        int t=0;
        int sum=0;
        for(int i=0;i<n;i++){
            t=nums[i];
            sum=0;
            while(t>0){
                sum+=t%10;
                t/=10;
            }
            if(sum==i) return i;

        }
        return -1;
    }
};