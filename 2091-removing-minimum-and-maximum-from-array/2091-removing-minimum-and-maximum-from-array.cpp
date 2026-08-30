class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int minIdx=min_element(nums.begin(),nums.end())-nums.begin();
        int maxIdx=max_element(nums.begin(),nums.end())-nums.begin();
        if(minIdx==maxIdx) return min(minIdx+1,n-minIdx);
        int left=min(minIdx,maxIdx);
        int right=max(minIdx,maxIdx);
        return min({right+1,n-left,left+n-right+1});

    }
};