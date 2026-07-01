class Solution {
public:
    int fun(int m, int n, int i, int j, vector<vector<int>>& dp){
        if(m-1==i && n-1==j) return 1;
        if(i>m-1 || j>n-1) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        dp[i][j]=fun(m,n,i+1,j,dp)+fun(m,n,i,j+1, dp);
        return dp[i][j];
    }
    int uniquePaths(int m, int n) {
        int i=0,j=0;
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return fun(m,n,i,j, dp );
        
        
    }
};