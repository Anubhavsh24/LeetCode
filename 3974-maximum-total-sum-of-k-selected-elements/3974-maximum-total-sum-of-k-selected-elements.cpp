class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        long long sum=0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=1;i<=k;i++){
            if(mul>0){
                sum+=1LL*nums[n-i]*mul;
                --mul;
            }
            else{
                sum+=nums[n-i];
            }
        }
        return sum;
    }
};