class Solution {
public:
    int atMost(vector<int>& nums, int k){
        int i=0,count=0,n=nums.size();
        for(int j=0;j<n;j++){
            if(nums[j]%2!=0) k--;
            while(k<0){
                if(nums[i]%2!=0) k++;
                i++;
            }
            count+=j-i+1;
        }
        return count;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        return atMost(nums, k) - atMost(nums, k - 1);
    }
};