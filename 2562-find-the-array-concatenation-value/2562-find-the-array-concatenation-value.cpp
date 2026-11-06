class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=n-1;
        long long ans=0;
        while(i<=j){
            if(i==j){
                ans+=nums[i];
                break;
            }
            long long a=nums[i];
            long long b=nums[j];
            string s=to_string(a)+to_string(b);
            ans+=stoll(s);
            i++;
            j--;
        }
        return ans;
    }
};