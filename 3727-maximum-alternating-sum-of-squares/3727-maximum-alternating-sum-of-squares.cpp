class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<long long> v(nums.size());
        for(int i=0;i<nums.size();i++){
            v[i]=1L*nums[i]*nums[i];
        }
        sort(v.begin(),v.end());
        long long ans=0;
        int i=0,j=v.size()-1;
        while(i<j){
            ans+=v[j];
            ans-=v[i];
            i++;
            j--;
        }
        if(i==j) ans+=v[i];
        return ans;
    }
};