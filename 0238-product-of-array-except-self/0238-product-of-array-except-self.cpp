class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> pp(n,1);

        for(int i=0;i<n-1;i++){
            pp[i+1]=pp[i]*nums[i];
        }
        int p=nums[n-1];

        for(int i=n-2;i>=0;i--){
            pp[i]=pp[i]*p;
            p*=nums[i];
        }
        return pp;
    }
};