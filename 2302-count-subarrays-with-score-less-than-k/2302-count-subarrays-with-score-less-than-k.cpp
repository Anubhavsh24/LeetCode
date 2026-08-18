class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long long int n=nums.size();
        long long int i=0,j=0;
        long long int count=0;
        long long int sum=0,score=0;
        while(i<n && j<n){
            sum+=nums[j];
            score=sum*(j-i+1);
            while(i<=j and score >= k){
                sum -= nums[i++];
                score = sum*(j-i+1);
            }
            count+=j-i+1;
            j++;
        }   
        return count;     
    }
};