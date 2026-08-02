class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        int n= nums.size();
        long long mx=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int cd=gcd(nums[i],nums[j]);
                mx=max(mx,(1LL*nums[i]*nums[j])/(1LL*cd*cd));
            }
        }
        return mx;
    }
};