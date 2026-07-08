class Solution {
public:
    void helper(int idx,vector<int>& nums, vector<int> ans, vector<vector<int>>& Ans, bool flag){
        if(idx==nums.size()){
            Ans.push_back(ans);
            return;
        }
        if(idx==nums.size()-1){
            helper(idx+1,nums, ans,Ans,true);
            if(flag==true){
                
                ans.push_back(nums[idx]);
                helper(idx+1,nums, ans,Ans,true);
            }
            
            return;
        }
        if(nums[idx]==nums[idx+1]){
            helper(idx+1,nums, ans,Ans,false);
            if(flag==true){
                
                ans.push_back(nums[idx]);
                helper(idx+1,nums, ans,Ans,true);
            }
            
        }
        else{
            helper(idx+1,nums, ans,Ans,true);
            if(flag==true){
                ans.push_back(nums[idx]);
                helper(idx+1,nums, ans,Ans,true);
            }
            
            
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        vector<vector<int>> Ans;
        helper(0,nums,ans,Ans,true);
        return Ans;
    }
};