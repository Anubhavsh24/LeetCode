class Solution {
public:
    int uniquePaths(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        const int MOD = 1e9 + 7;
        vector<vector<vector<long long>>>dp(m,vector<vector<long long>>(n,vector<long long>(2,0)));
        dp[0][0][0]=1;
        dp[0][0][1]=1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                long long L=0;
                long long U=0;
                if(i==0 && j==0){
                    continue;
                }
                if(j>0){
                    L=dp[i][j-1][0];
                }
                if(i>0){
                   U= dp[i-1][j][1];

                }
                if(grid[i][j]==0){
                    dp[i][j][0]=(L+U) % MOD;
                    dp[i][j][1]=(L+U) % MOD;
                }
                else{
                    dp[i][j][0]=U;
                    dp[i][j][1]=L;
                }

            }
        }
        return dp[m-1][n-1][0];
    }
};