class Solution {
public:
    void helper(vector<int>& nums, vector<int> ans, vector<vector<int>>& Ans, int idx){
        if(idx==nums.size()){
            Ans.push_back(ans);
            return;
        }
        helper(nums,ans,Ans,idx+1);
        ans.push_back(nums[idx]);
        helper(nums,ans,Ans,idx+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>> Ans;
        helper(nums, ans, Ans, 0);
        return Ans;
    }
};