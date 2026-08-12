class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        int n=nums.size();
        int long long maxe=0;
        vector<long long> conver(n);
        for(int i=0;i<n;i++){
            maxe=max(maxe,(long long) nums[i]);
            conver[i]=nums[i]+maxe;
            if(i>0){
                conver[i]+=conver[i-1];
            }
        }
        return conver;
    }
};