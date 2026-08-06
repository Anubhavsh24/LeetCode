class Solution {
public: // By Cyclic Sort Method
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        vector<int> check(n+1,false);
        for(int i=0;i<n;i++){
            int ele=nums[i];
            check[ele]=true;

        }
        for(int i=0;i<=n;i++){
            if(check[i]==false) return i;
        }
        return 0;
    }
};