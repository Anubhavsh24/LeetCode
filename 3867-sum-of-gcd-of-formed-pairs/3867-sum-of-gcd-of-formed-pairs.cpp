class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int val=nums[0];
        vector<int> prefixGcd;

        for(int i=0;i<nums.size();i++){
            val=max(nums[i],val);
            prefixGcd.push_back(gcd(val,nums[i]));
        }
        
        sort(prefixGcd.begin(),prefixGcd.end());
        int i=0,j=prefixGcd.size()-1;
        long long sum=0;
        while(i<j){
            sum+=gcd(prefixGcd[i++],prefixGcd[j--]);
        }
        return sum;

    }
};