class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        if(matrix.empty()) return {};
        vector<int> ans;
        int num;
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++){
            num=0;
            for(int j=0;j<n;j++){
                num+=matrix[i][j];

            }
            ans.push_back(num);
        }
        return ans;
    }
};