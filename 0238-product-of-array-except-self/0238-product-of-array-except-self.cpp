class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> pp(n,1);
        vector<int> sp(n,1);

        for(int i=0;i<n-1;i++){
            pp[i+1]=pp[i]*nums[i];
        }

        for(int i=n-2;i>=0;i--){
            sp[i]=sp[i+1]*nums[i+1];
        }
        for(int i=0;i<n;i++){
            pp[i]*=sp[i];
        }
        return pp;
    }
};