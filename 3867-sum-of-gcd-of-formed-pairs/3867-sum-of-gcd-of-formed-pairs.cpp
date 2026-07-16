class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int> mx;
        int val=nums[0];
        vector<int> prefixGcd;

        for(int i=0;i<nums.size();i++){
            if(nums[i]>val) val=nums[i];
            mx.push_back(val);
        }
        for(int i=0;i<nums.size();i++){
            prefixGcd.push_back(gcd(mx[i],nums[i]));
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