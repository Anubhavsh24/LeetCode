class Solution {
public:
    int findGCD(vector<int>& nums) {
        int min=nums[0];
        int max=nums[0];
        int n=nums.size();
        for(int x: nums){
            if(x<min) min=x;
            if(x>max) max=x;
        }
        return gcd(min,max);
    }
};