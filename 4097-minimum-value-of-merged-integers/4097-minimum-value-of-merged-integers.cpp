class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int n=nums.size();
        int ans=INT_MAX;
        for(int i=0;i<=n-2;i+=2){
            string s=to_string(nums[i])+to_string(nums[i+1]);
            int can=stoi(s);
            ans=min(ans,can);
        }
        return ans;
    }
};