class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n=nums.size();
        set<int> seen;
        set<int> notSpecial;
        seen.insert(nums[0]);
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[i-1] && seen.count(nums[i])){
                notSpecial.insert(nums[i]);
            }
            seen.insert(nums[i]);
        }
        
        return seen.size()-notSpecial.size();

    }
};